import json
import os
import re

PackageName = "IvionOnline"


def ReadJson():
    with open("GameMetaData.json") as jsonFile:
        return json.load(jsonFile)


GameMetaData = ReadJson()


class ValueType:
    headerBase = open("GeneraterBaseFiles/ValueTypeHeader").read()
    protoBase = open("GeneraterBaseFiles/ValueTypeProtoBase").read()
    mutationProtoBase = open(
        "GeneraterBaseFiles/ValueTypeMutationProtoBase").read()
    mutationSourceBase = open(
        "GeneraterBaseFiles/ValueTypeMutatationSourceBase").read()

    def __init__(self, name: str, cType):
        self.Name = name
        if isinstance(cType, list):
            enumType = "\tenum {}_Type {{\n{}\n\t}}".format(self.Name, "\n".join(["\t\t{} = {};".format(
                name, value) for name, value in zip(cType, range(len(cType)))]))
            self.ProtoMembers = [
                enumType, "\t{}_Type Value = 1;".format(self.Name)]
        elif isinstance(cType, dict):
            self.ProtoMembers = ["\t{} {} = {};".format(T, name, i + 1) for (
                name, T), i in zip(cType.items(), range(len(cType)))]
        else:
            assert(isinstance(cType, str))
            self.ProtoMembers = ["\t{} Value = 1;".format(cType)]
        self.Proto = ValueType.protoBase.format(**{
            "NAME": self.Name,
            "MEMBERS": "\n".join(self.ProtoMembers)
        })
        self.MutationProto = ValueType.mutationProtoBase.format(**{
            "NAME": self.Name,
        })
        self.Mutators = [x.format(self.Name) for x in [
            "{}_Set_Mutation",
            "List_{}_Insert_Mutation",
            "List_{}_Remove_Mutation"
        ]]
        self.Types = [x.format(self.Name).upper() for x in [
            "TYPE_{}",
            "TYPE_Ref_{}",
            "TYPE_List_{}",
            "TYPE_List_Ref_{}",
        ]]
        self.MutatorSource = ValueType.mutationSourceBase.format(**{
            "NAME": self.Name,
            "PACKAGE_NAME": PackageName,
        })


TypeRegex = re.compile("<|>")


def ProtoType(mdType: str):
    protoType = [x for x in TypeRegex.split(mdType) if x != ""]
    Type = protoType[-1]
    protoType = protoType[:-1]
    protoType.reverse()
    for T in protoType:
        if T == "Ref":
            Type = "ObjectPath"
        elif T == "List":
            Type = "List_" + Type
        else:
            raise RuntimeError("BAD TYPE! {} - {}".format(T, Type))
    return Type


def CppType(mdType: str):
    protoType = [x for x in TypeRegex.split(mdType) if x != ""]
    Type = "{}::{}".format(PackageName, protoType[-1])
    protoType = protoType[:-1]
    protoType.reverse()
    for T in protoType:
        if T == "Ref":
            pass
        elif T == "List":
            Type = "google::protobuf::RepeatedPtrField<{}>".format(Type)
        else:
            raise RuntimeError("BAD TYPE! {} - {}".format(T, Type))
    return "{}*".format(Type)

class ClassType:
    headerBase = open("GeneraterBaseFiles/ValueTypeHeader").read()
    protoBase = open("GeneraterBaseFiles/ValueTypeProtoBase").read()

    def __init__(self, name: str, cType: dict):
        self.Name = name
        self.ProtoMembers = ["\t{} {} = {};".format(ProtoType(T), name, i + 1) for
                             (name, T), i in zip(cType.items(), range(len(cType)))]

        self.Proto = ClassType.protoBase.format(**{
            "NAME": self.Name,
            "MEMBERS": "\n".join(self.ProtoMembers)
        })
        # you can't mutate classes directly

        self.Types = [x.format(self.Name).upper() for x in [
            "TYPE_{}",
            "TYPE_List_{}",
            "TYPE_List_Ref_{}",
        ]]


Types = list()
Mutators = list()

# read value types
ValueTypes = {"ObjectPath": ValueType("ObjectPath", {
    "Field_Indecies": "repeated int32",
    "Full_Path": "string",
    "Object_Type": "ObjectType"
})}

ClassTypes = dict()
for name, value in GameMetaData["ValueTypes"].items():
    VT = ValueType(name, value)
    ValueTypes[name] = VT
    Types.extend(VT.Types)
    Mutators.extend(VT.Mutators)

for name, value in GameMetaData["Classes"].items():
    CT = ClassType(name, value)
    ClassTypes[name] = CT
    Types.extend(CT.Types)

for name, details in list(GameMetaData["Methods"].items()):
    if "Args" not in details:
        GameMetaData["Methods"][name]["Args"] = list()
    if "Return" not in details:
        GameMetaData["Methods"][name]["Return"] = list()
    if "<Type>" in name:
        del GameMetaData["Methods"][name]

        for t in ValueTypes.keys():
            methodName = name.replace("<Type>", t)
            methodArgs = [x.replace("<Type>", t) for x in details["Args"]]
            methodReturns = [x.replace("<Type>", t) for x in details["Return"]]
            GameMetaData["Methods"][methodName] = {
                "Args": methodArgs,
                "Return": methodReturns
            }

# build protofile
with open("Protobuf/GameState.proto", 'w') as protoFile:
    baseProto = open("GeneraterBaseFiles/TypesProtoBase").read().format(**{
        "PACKAGE_NAME": PackageName,
        "TYPES": "\n".join(["\t{} = {};".format(x, i) for x, i in zip(Types, range(len(Types)))])
    })
    protoFile.write(baseProto)
    for name, vt in ValueTypes.items():
        protoFile.write(vt.Proto)
    for name, vt in ClassTypes.items():
        protoFile.write(vt.Proto)

# with open("Protobuf/Mutation.proto", 'w') as protoFile:
    # baseProto = open("GeneraterBaseFiles/MutationProtoBase").read().format(**{
    #     "PACKAGE_NAME": PackageName,
    # })
    # protoFile.write(baseProto)
    for name, vt in ValueTypes.items():
        protoFile.write(vt.MutationProto)

    protoFile.write("\nmessage Mutation\n{{\n\toneof mut{{\n{}\n\t}}\n}}\n".format("\n".join(
        ["\t\t{} {} = {};".format(x, x, i+1)
         for x, i in zip(Mutators, range(len(Mutators)))]
    )))


# with open("Protobuf/Effect.proto", 'w') as protoFile:
    # baseProto = open("GeneraterBaseFiles/EffectsProtoBase").read().format(**{
    #     "PACKAGE_NAME": PackageName,
    # })
    # protoFile.write(baseProto)

    def WriteMethodProto(name: str, args: dict, returns: dict):
        index = 1
        protoFile.write("message {} {{\n".format(name))
        for arg in args:
            arg, argName = arg.split(" ")
            protoFile.write("\t{} {} = {};\n".format(
                ProtoType(arg), argName, index))
            index += 1
        for arg in returns:
            arg, argName = arg.split(" ")
            protoFile.write("\t{} {} = {};\n".format(
                ProtoType(arg), argName, index))
            index += 1
        protoFile.write("}\n\n")

    for methodName, details in GameMetaData["Methods"].items():
        WriteMethodProto(methodName, details["Args"], details["Return"])

    #
    protoFile.write("message Method {\n")
    protoFile.write("\toneof methods {\n")
    protoFile.write("\n".join(["\t\t{} {} = {};".format(x, x, i+1) for x, i in zip(
        GameMetaData["Methods"].keys(), range(len(GameMetaData["Methods"].keys())))]))
    protoFile.write("\n\t}\n")
    protoFile.write("}\n\n")

    #
    protoFile.write("message List_Method {\n")
    protoFile.write("\trepeated Method element = 1;\n")
    protoFile.write("}\n\n")


with open("Include/IOEngine/Effect_GENERATED.hpp", 'w') as headerFile:
    headerFile.write(open("GeneraterBaseFiles/EffectsHeaderBase").read().format(**{
        "PACKAGE_NAME": PackageName,
    }))
    headerFile.write("\nnamespace IO {\n")

    def ResolveType(argType:str, argName: str):
        protoType = [x for x in TypeRegex.split(argType) if x != ""]
        assert(len(protoType) <= 3)
        if len(protoType) == 1:
            return "message->mutable_{}()".format(argName.lower())
        elif len(protoType) == 2:
            if protoType[0] == "Ref":
                return "dynamic_cast<{}::{}*>(instance->ResolvePath(message->mutable_{}()))".format(PackageName, protoType[1], argName.lower())
            if protoType[0] == "List":
                return "message->mutable_{}()->mutable_element()".format(argName.lower())
        elif len(protoType) == 3:
            assert(protoType[0] == "Ref")
            assert(protoType[1] == "List")
            assert(protoType[2] == "ObjectPath")
            return "dynamic_cast<{}::List_ObjectPath*>(instance->ResolvePath(message->mutable_{}()))->mutable_element()".format(PackageName, argName.lower())


    def WriteMethodCpp(name: str, arguments: list):
        headerFile.write("bool __{}(GameInstance* instance".format(name))
        headerFile.write("".join([", {} {}".format(CppType(arg), argName) for (arg, argName) in arguments]))
        headerFile.write(");\n")

    def WriteMethodCppWrapper(name: str, arguments: list):
        headerFile.write(
            "\ninline bool {}(\n\t\tGameInstance* instance, {}::{}* message) {{\n".format(name, PackageName, name))
        headerFile.write("\treturn __{}(\n\t\tinstance".format(name))
        headerFile.write("".join([",\n\t\t"+ResolveType(arg, argName) for (arg, argName) in arguments]))
        headerFile.write(");\n")
        headerFile.write("}\n\n")

    for methodName, details in GameMetaData["Methods"].items():
        arguments = [(arg.split(" "))for arg in details["Return"]]
        arguments.extend([(arg.split(" "))for arg in details["Args"]])
        WriteMethodCpp(methodName, arguments)

    headerFile.write("\n")

    for methodName, details in GameMetaData["Methods"].items():
        arguments = [(arg.split(" "))for arg in details["Return"]]
        arguments.extend([(arg.split(" "))for arg in details["Args"]])
        WriteMethodCppWrapper(methodName, arguments)

    headerFile.write("\n} // namespace IO")


with open("Source/IOEngine/GameInstance_Generated.cpp", 'w') as sourceFile:
    baseProto = open("GeneraterBaseFiles/GameInstanceSourceBase").read().format(**{
        "PACKAGE_NAME": PackageName,
    })
    sourceFile.write(baseProto)
    sourceFile.write("\nnamespace IO {\n")
    sourceFile.write("\n\n".join(
        vt.MutatorSource for name, vt in ValueTypes.items()))

    switch = "\nvoid GameInstance::ApplyMutation({}::Mutation* mutation){{\n\t{}}}\n}}\n".format(
        PackageName, "} else ".join([
            "if(mutation->has_{}()){{\n\t\tApply_{}(this, mutation->mutable_{}());\n\t".format(x.lower(), x, x.lower()) for x in Mutators
        ]
        ))
    sourceFile.write(switch)
    sourceFile.write(switch.replace("Apply", "Revert"))
    sourceFile.write("\n} // namespace IO")
