#include <IOEngine/GameInstance.hpp>

#include <cassert>

GameInstance::GameInstance(): module_("__main__")
{
    assert(module_ != nullptr);
    auto dict = module_.GetDict();
    Python_LoadCode(dict, "Python/Engine/GameInstance.py");
    auto constructor = PythonCallable(dict.GetItem("GameInstance"));
    assert(constructor != nullptr);

    auto game = constructor.Call();
    assert(game);
    root_ = game.value();
}

std::optional<PythonObject> GameInstance::GetPythonObject(const std::string& name)
{
    return root_.CallMethod("GetObject", PythonString(name));
}
