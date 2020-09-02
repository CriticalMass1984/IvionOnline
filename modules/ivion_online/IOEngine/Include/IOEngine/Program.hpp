#pragma once

#include <IOEngine/AST/Method.hpp>
#include <IOEngine/Branch.hpp>
#include <IOEngine/Entity.hpp>
#include <IOEngine/MemoryPool.hpp>
#include <type_traits>
#include <vector>

namespace IO {
namespace Engine {
/*
    holds an execution graph and the stack memory for the functions
*/
class Program : public Entity {
	const std::string name_;
	std::vector<AST::Method *> methods_;

	bool ExecuteRecursive(GameInstance *instance, Branch *activeBranch, std::vector<AST::Method *>::iterator it, const std::vector<AST::Method *>::iterator &end);

public:
	Program() = default;
	Program(const std::string &name) :
			name_(name) {}

	Program(const Program &) = delete;
	Program(Program &&) = default;
	~Program() = default;

	const std::string &Name() const noexcept { return name_; }

	template <typename T, typename... args_t>
	T *EmplaceStackVar(MemoryPool *memory, args_t... args) {
		assert(memory);
		return memory->EmplaceObject<T>(std::forward<args_t>(args)...);
	}

	template <typename T, typename... args_t>
	T *EmplaceMethodCallArgs(MemoryPool *memory, args_t... args) {
		assert(memory);
		T *methodArgs = memory->EmplaceObject<T>(std::forward<args_t>(args)...);
		AST::Method *method = reinterpret_cast<AST::Method *>(methodArgs);
		methods_.push_back(method);
		return methodArgs;
	}

	static void Compile(IO::Engine::GameInstance *instance, IO::Engine::Program *program, bool isCard, const std::string &text);

	// computes a (possibly nested) branch of changes to the game state
	bool Execute(GameInstance *instance, Branch *activeBranch);

	void Print();
};

} // namespace Engine
} // namespace IO