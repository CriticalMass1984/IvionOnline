#pragma once

#include <IOEngine/AST/Method.hpp>
#include <IOEngine/Player.hpp>
#include <cassert>

namespace IO {
namespace Engine {

namespace AST {
struct SelectTopOfStackArgs;

bool SelectTopOfStackMethod(GameInstance *instance, Branch *activeBranch, SelectTopOfStackArgs *self) noexcept;

struct SelectTopOfStackArgs {
	Method const method_{ (Method)SelectTopOfStackMethod };
	StackCard *const card_; //the card at the top of the stack will be selected

	SelectTopOfStackArgs(StackCard *card) :
			card_(card) {
	}
};

SelectTopOfStackArgs* SelectTopOfStack(GameInstance *instance, Program *program,
		StackCard *card);

struct SelectTopOfStackDelta : public Var::Delta {
	SelectTopOfStackArgs *const args_;
	Card *const card_;

	static bool ApplyDelta(SelectTopOfStackDelta *self);

	static void RevertDelta(SelectTopOfStackDelta *self);

	inline SelectTopOfStackDelta(SelectTopOfStackArgs *args, Card *card) noexcept :
			Delta((Delta::ApplyFunc)ApplyDelta, (Delta::RevertFunc)RevertDelta),
			args_(args),
			card_(card) {
	}

	~SelectTopOfStackDelta() noexcept = default;
};

} // namespace AST
} // namespace Engine
} // namespace IO