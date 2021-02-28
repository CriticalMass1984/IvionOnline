#pragma once

#include <memory>
#include <type_traits>
#include <unordered_map>
#include <vector>

#include <IOEngine/Python++.hpp>

class GameInstance {
	PythonModule module_;
	PythonObject root_;

public:
	GameInstance();

	std::optional<PythonObject> GetPythonObject(const std::string &name);

	// generates the paths
	void GenerateBranchingPaths();

	void MakeChoice();
};