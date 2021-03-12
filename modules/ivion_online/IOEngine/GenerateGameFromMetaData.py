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
        "GeneraterBaseFiles/ValueTypeMutationSourceBase").read()
    mutationHeaderBase = open(
        "GeneraterBaseFiles/ValueTypeMutationHeaderBase").read()

    def __init__(self, name: str, cType):
        self.Name = name
        if isinstance(cType, list):
            self.Members = {"Value": "{}_Type".format(self.Name)}
            enumType = "\tenum {}_Type {{\n{}\n\t}}".format(self.Name, "\n".join(["\t\t{} = {};".format(
                name, value) for name, value in zip(cType, range(len(cType)))]))
            self.ProtoMembers = [
                enumType, "\t{}_Type Value = 1;".format(self.Name)]
            self.Type = "enum"
        elif isinstance(cType, dict):
            self.Members = cType
            self.ProtoMembers = ["\t{} {} = {};".format(T, name, i + 1) for (
                name, T), i in zip(cType.items(), range(len(cType)))]
            self.Type = "struct"
        else:
            assert(isinstance(cType, str))
            self.Type = "POD"
            self.Members = {"Value": cType}
            self.ProtoMembers = ["\t{} Value = 1;".format(cType)]
        if self.Name != "ObjectPath":
            self.ProtoMembers.append(
                "\tObjectPath AbsPath = {};".format(len(self.ProtoMembers) + 1))
            self.ProtoMembers.append(
                "\tstring Name = {};".format(len(self.ProtoMembers) + 1))

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
            # "TYPE_Ref_{}",
            "TYPE_List_{}",
            "TYPE_List_Ref_{}",
        ]]
        self.MutatorHeader = ValueType.mutationHeaderBase.format(**{
            "NAME": self.Name,
            "PACKAGE_NAME": PackageName,
        })
        if self.Name == "ObjectPath":
            self.MutatorSource = ValueType.mutationSourceBase.format(**{
                "NAME": self.Name,
                "PACKAGE_NAME": PackageName,
                "APPLY_VALUE": "object->CopyFrom(mutation->newvalue());",
                "REVERT_VALUE": "object->CopyFrom(mutation->oldvalue());",
            })
        else:
            self.MutatorSource = ValueType.mutationSourceBase.format(**{
                "NAME": self.Name,
                "PACKAGE_NAME": PackageName,
                "APPLY_VALUE": "\n\t".join(["object->set_{}(mutation->newvalue().{}());".format(x.lower(), x.lower()) for x in self.Members]),
                "REVERT_VALUE": "\n\t".join(["object->set_{}(mutation->oldvalue().{}());".format(x.lower(), x.lower()) for x in self.Members]),
            })


TypeRegex = re.compile("<|>")


def SplitType(mdType: str):
    return [x for x in TypeRegex.split(mdType) if x != ""]


def ProtoType(mdType: str):
    protoType = SplitType(mdType)
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
    protoType = SplitType(mdType)
    Type = protoType[-1]
    protoType = protoType[:-1]
    protoType.reverse()
    for T in protoType:
        if T == "Ref":
            pass
        elif T == "List":
            Type = "List_{}".format(Type)
        else:
            return "{}::{}*".format(PackageName, T)
            # raise RuntimeError("BAD TYPE! {} - {}".format(T, Type))
    return "{}::{}*".format(PackageName, Type)


class ClassType:
    headerBase = open("GeneraterBaseFiles/ValueTypeHeader").read()
    protoBase = open("GeneraterBaseFiles/ValueTypeProtoBase").read()

    def __init__(self, name: str, cType: dict):
        self.Name = name
        self.Members = cType
        self.ProtoMembers = ["\t{} {} = {};".format(ProtoType(T), name, i + 1) for
                             (name, T), i in zip(cType.items(), range(len(cType)))]
        self.ProtoMembers.append(
            "\tObjectPath AbsPath = {};".format(len(self.ProtoMembers) + 1))
        self.ProtoMembers.append(
            "\tstring Name = {};".format(len(self.ProtoMembers) + 1))

        self.Proto = ClassType.protoBase.format(**{
            "NAME": self.Name,
            "MEMBERS": "\n".join(self.ProtoMembers)
        })
        # you can't mutate classes directly

        self.Types = [x.format(self.Name).upper() for x in [
            "TYPE_{}",
            # "TYPE_REF_{}",
            "TYPE_List_{}",
            "TYPE_List_Ref_{}",
        ]]


Types = list()
Mutators = list()

# read value types
ValueTypes = dict()

GameMetaData["ValueTypes"]["ObjectPath"] = {
    "Path": "repeated string",
    "Object_Type": "ObjectType"
}

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
            Types.append("TYPE_{}".format(methodName.upper()))
    else:
        Types.append("TYPE_{}".format(name.upper()))
Types.append("TYPE_METHOD")
Types.append("TYPE_LIST_METHOD")


# build protofile
with open("Protobuf/GameState.proto", 'w') as protoFile:
    baseProto = open("GeneraterBaseFiles/TypesProtoBase").read().format(**{
        "PACKAGE_NAME": PackageName,
        "TYPES": "\n".join(["\tTYPE_NONE = 0;"] + ["\t{} = {};".format(x, i + 1) for x, i in zip(Types, range(len(Types)))])
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
        protoFile.write("\tstring Name = {};\n".format(index))
        index += 1
        protoFile.write("\tObjectPath AbsPath = {};\n".format(index))
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
    protoFile.write("\tstring Name = 2;\n")
    protoFile.write("\tObjectPath AbsPath = 3;\n")
    protoFile.write("}\n\n")


with open("Include/IOEngine/Effect_GENERATED.hpp", 'w') as headerFile:
    with open("Source/IOEngine/Effect_GENERATED.cpp", 'w') as sourceFile:
        headerFile.write(open("GeneraterBaseFiles/EffectsHeaderBase").read().format(**{
            "PACKAGE_NAME": PackageName,
        }))
        sourceFile.write(open("GeneraterBaseFiles/EffectsSourceBase").read().format(**{
            "PACKAGE_NAME": PackageName,
        }))
        

        # resolve Object Path
        header = "google::protobuf::Message *ResolvePath(GameInstance* instance, {}::ObjectPath *obj, const StringIter& fieldName, const StringIter& end)".format(PackageName)
        headerFile.write("{};\n".format(header))
        sourceFile.write("{} {{\n".format(header))
        sourceFile.write("\tgoogle::protobuf::Message* innerObject = ResolvePath(instance, obj);\n")
        sourceFile.write("\tconst auto *innerDesc = innerObject->GetDescriptor();\n")
        sourceFile.write("\tconst auto *nameFieldDesc = innerDesc->FindFieldByName(\"Name\");\n")
        sourceFile.write("\tif (nameFieldDesc && nameFieldDesc->type() == google::protobuf::FieldDescriptor::Type::TYPE_STRING) {\n")
        sourceFile.write("\t\tconst auto& nextField = fieldName + 1;\n")
        sourceFile.write("\t\tconst std::string &innerFieldName = innerObject->GetReflection()->GetString(*innerObject, nameFieldDesc);\n")
        sourceFile.write("\t\tif (*fieldName == innerFieldName) {\n")
        sourceFile.write("\t\t\tswitch(obj->object_type()){\n")
        for name, classObject in ClassTypes.items():
            sourceFile.write("\t\t\t\tcase {}::ObjectType::TYPE_{}:{{\n".format(PackageName, name.upper()))
            sourceFile.write("\t\t\t\t\tauto* trueElement = dynamic_cast<{}::{}*>(innerObject);\n".format(PackageName, name))
            sourceFile.write("\t\t\t\t\tassert(trueElement);\n")
            sourceFile.write("\t\t\t\t\treturn ResolvePath(instance, trueElement, nextField, end);\n")
            sourceFile.write("\t\t\t\t} break;\n")
            sourceFile.write("\t\t\t\tcase {}::ObjectType::TYPE_LIST_{}:{{\n".format(PackageName, name.upper()))
            sourceFile.write("\t\t\t\t\tauto* trueElement = dynamic_cast<{}::List_{}*>(innerObject);\n".format(PackageName, name))
            sourceFile.write("\t\t\t\t\tassert(trueElement);\n")
            sourceFile.write("\t\t\t\t\treturn ResolvePath(instance, trueElement, nextField, end);\n")
            sourceFile.write("\t\t\t\t} break;\n")
        for name, classObject in ValueTypes.items():
            pass
        sourceFile.write("\t\t\t\tdefault:\n\t\t\t\t\treturn nullptr;\n")
        sourceFile.write("\t\t\t}\n")
        sourceFile.write("\t\t}\n")
        sourceFile.write("\t}\n")
        sourceFile.write("\treturn nullptr;\n")
        sourceFile.write("}\n")

        # resolve Object Path List
        header = "google::protobuf::Message *ResolvePath(GameInstance* instance, {}::List_ObjectPath *obj, const StringIter& fieldName, const StringIter& end)".format(PackageName)
        headerFile.write("{};\n".format(header))
        sourceFile.write("{} {{\n".format(header))
        sourceFile.write("\tif (auto optIndex = TryParse(*fieldName); optIndex.has_value()) {\n")
        sourceFile.write("\t\tconst int idx = optIndex.value();\n")
        sourceFile.write("\t\tconst auto& nextField = fieldName + 1;\n")
        sourceFile.write("\t\tif(nextField == end){return obj->mutable_element(idx);}\n")
        sourceFile.write("\t\treturn ResolvePath(instance, obj->mutable_element(idx), nextField, end);\n")
        sourceFile.write("\t} else {\n")
        sourceFile.write("\t\tfor(auto& element : *obj->mutable_element()){\n")
        sourceFile.write("\t\t\tauto* innerObject = ResolvePath(instance, &element, fieldName, end);\n")
        sourceFile.write("\t\t\tif(innerObject){\n")
        sourceFile.write("\t\t\t\treturn innerObject;\n")
        sourceFile.write("\t\t\t}\n")
        sourceFile.write("\t\t\treturn nullptr;\n")
        sourceFile.write("\t\t}\n")
        sourceFile.write("\t}\n")
        sourceFile.write("}\n")

        # resolve value types
        for name, classObject in ValueTypes.items():
            if name == "ObjectPath":
                continue
            header = "google::protobuf::Message *ResolvePath(GameInstance* instance, {PACKAGE}::{NAME} *obj, const StringIter& fieldName, const StringIter& end)".format(**{"PACKAGE": PackageName, "NAME": name})
            headerFile.write("{};\n".format(header))
            sourceFile.write("{} {{\n".format(header))
            sourceFile.write("\tassert(fieldName == end);\n")
            sourceFile.write("\treturn obj;\n")
            sourceFile.write("}\n")

        # resolve class types
        for name, classObject in ClassTypes.items():
            header = "google::protobuf::Message *ResolvePath(GameInstance* instance, {PACKAGE}::{NAME} *obj, const StringIter& fieldName, const StringIter& end)".format(**{"PACKAGE": PackageName, "NAME": name})
            headerFile.write("{};\n".format(header))
            sourceFile.write("{} {{\n".format(header))
            for memberName, memberType in classObject.Members.items():
                if memberType in ["string", "int32", "bool"]:
                    continue
                sourceFile.write("\tif(*fieldName == \"{}\") {{\n".format(memberName))
                sourceFile.write("\t\tconst auto& nextField = fieldName + 1;\n")
                sourceFile.write("\t\tif(nextField == end){{return obj->mutable_{}();}}\n".format(memberName.lower()))
                sourceFile.write("\t\treturn ResolvePath(instance, obj->mutable_{}(), nextField, end);\n".format(memberName.lower()))
                sourceFile.write("\t}\n")
            sourceFile.write("\tassert(false);\n")
            sourceFile.write("\treturn nullptr;\n")
            sourceFile.write("}\n")

        # resolve lists
        for name in list(ValueTypes.keys()) + list(ClassTypes.keys()):
            if name == "ObjectPath":
                continue
            header = "google::protobuf::Message *ResolvePath(GameInstance* instance, {PACKAGE}::List_{NAME} *obj, const StringIter& fieldName, const StringIter& end)".format(**{"PACKAGE": PackageName, "NAME": name})
            headerFile.write("{};\n".format(header))
            sourceFile.write("{} {{\n".format(header))
            sourceFile.write("\tconst auto& nextField = fieldName + 1;\n")
            sourceFile.write("\tif (auto optIndex = TryParse(*fieldName); optIndex.has_value()) {\n")
            sourceFile.write("\t\tconst int idx = optIndex.value();\n")
            sourceFile.write("\t\tif(nextField == end){return obj->mutable_element(idx);}\n")
            sourceFile.write("\t\t\t\treturn ResolvePath(instance, obj->mutable_element(idx), nextField, end);\n")
            sourceFile.write("\t} else {\n")
            sourceFile.write("\t\tfor(auto& element : *obj->mutable_element()){\n")
            sourceFile.write("\t\t\tif(element.name() == *fieldName){\n")
            sourceFile.write("\t\t\t\tif(nextField == end){return &element;}\n")
            sourceFile.write("\t\t\t\treturn ResolvePath(instance, &element, nextField, end);\n")
            sourceFile.write("\t\t\t}\n")
            sourceFile.write("\t\t}\n")
            sourceFile.write("\t}\n")
            sourceFile.write("\tassert(false);\n")
            sourceFile.write("\treturn nullptr;\n")
            sourceFile.write("}\n")

        # resolve methods
        for methodName, details in GameMetaData["Methods"].items():
            header = "google::protobuf::Message *ResolvePath(GameInstance* instance, {PACKAGE}::{NAME} *obj, const StringIter& fieldName, const StringIter& end)".format(**{"PACKAGE": PackageName, "NAME": methodName})
            headerFile.write("{};\n".format(header))
            sourceFile.write("{} {{\n".format(header))

            arguments = [(arg.split(" ")) for arg in details["Return"]]
            arguments.extend([(arg.split(" ")) for arg in details["Args"]])

            for argType, argName in arguments:
                sourceFile.write("\tif(*fieldName == \"{}\") {{\n".format(argName))
                sourceFile.write("\t\tconst auto& nextField = fieldName + 1;\n")
                sourceFile.write("\t\tif(nextField == end){{return obj->mutable_{}();}}\n".format(argName.lower()))
                sourceFile.write("\t\treturn ResolvePath(instance, obj->mutable_{}(), nextField, end);\n".format(argName.lower()))
                sourceFile.write("\t}\n")
            if len(arguments) == 0:
                sourceFile.write("\tif(fieldName == end){return obj;}\n")
            sourceFile.write("\tassert(false);\n")
            sourceFile.write("\treturn nullptr;\n")
            sourceFile.write("}\n")


        # resolve Method
        header = "google::protobuf::Message *ResolvePath(GameInstance* instance, {PACKAGE}::Method *obj, const StringIter& fieldName, const StringIter& end)".format(**{"PACKAGE": PackageName})
        headerFile.write("{};\n".format(header))
        sourceFile.write("{} {{\n".format(header))
        for methodName, methodMembers in GameMetaData["Methods"].items():
            sourceFile.write("\tif(obj->has_{}()){{\n".format(methodName.lower()))
            sourceFile.write("\t\treturn ResolvePath(instance, obj->mutable_{}(), fieldName, end);\n".format(methodName.lower()))
            sourceFile.write("\t}\n")
        sourceFile.write("\tassert(false);\n")
        sourceFile.write("\treturn nullptr;\n")
        sourceFile.write("}\n")

        # resolve Method list
        header = "google::protobuf::Message *ResolvePath(GameInstance* instance, {PACKAGE}::List_Method *obj, const StringIter& fieldName, const StringIter& end)".format(**{"PACKAGE": PackageName})
        headerFile.write("{};\n".format(header))
        sourceFile.write("{} {{\n".format(header))
        sourceFile.write("\tconst auto& nextField = fieldName + 1;\n")
        sourceFile.write("\tif (auto optIndex = TryParse(*fieldName); optIndex.has_value()) {\n")
        sourceFile.write("\t\tconst int idx = optIndex.value();\n")
        sourceFile.write("\t\tif(nextField == end){return obj->mutable_element(idx);}\n")
        sourceFile.write("\t\t\t\treturn ResolvePath(instance, obj->mutable_element(idx), nextField, end);\n")
        sourceFile.write("\t} else {\n")
        sourceFile.write("\t\tfor(auto& element : *obj->mutable_element()){\n")
        for methodName, methodMembers in GameMetaData["Methods"].items():
            sourceFile.write("\t\t\tif(element.has_{}() && element.{}().name() == *fieldName){{\n".format(methodName.lower(), methodName.lower()))
            sourceFile.write("\t\t\t\treturn ResolvePath(instance, element.mutable_{}(), nextField, end);\n".format(methodName.lower()))
            sourceFile.write("\t\t\t}\n")
        sourceFile.write("\t\t}\n")
        sourceFile.write("\t}\n")
        sourceFile.write("\tassert(false);\n")
        sourceFile.write("\treturn nullptr;\n")
        sourceFile.write("}\n")



        # 
        def ResolveType(argType: str, argName: str):
            protoType = [x for x in TypeRegex.split(argType) if x != ""]
            assert(len(protoType) <= 3)
            if len(protoType) == 1:
                return "message->mutable_{}()".format(argName.lower())
            elif len(protoType) == 2:
                if protoType[0] == "Ref":
                    return "instance->ResolvePath<{}::{}>(message->mutable_{}())".format(PackageName, protoType[1], argName.lower())
                if protoType[0] == "List":
                    return "message->mutable_{}()".format(argName.lower())
            elif len(protoType) == 3:
                assert(protoType[0] == "Ref")
                assert(protoType[1] == "List")
                assert(protoType[2] == "ObjectPath")
                return "instance->ResolvePath<{}::List_ObjectPath>(message->mutable_{}())".format(PackageName, argName.lower())

        def WriteMethodCpp(name: str, arguments: list):
            headerFile.write(
                "bool __{}(GameInstance* instance, MethodIter begin, const MethodIter& end".format(name))
            headerFile.write("".join(
                [", {} {}".format(CppType(arg), argName) for (arg, argName) in arguments]))
            headerFile.write(");\n")

        def WriteMethodCppWrapper(name: str, arguments: list):
            headerFile.write(
                "\ninline bool {}(\n\t\tGameInstance* instance, MethodIter begin, const MethodIter& end, {}::{}* message) {{\n".format(name, PackageName, name))
            headerFile.write(
                "\treturn __{}(\n\t\tinstance, begin, end".format(name))
            headerFile.write(
                "".join([",\n\t\t"+ResolveType(arg, argName) for (arg, argName) in arguments]))
            headerFile.write(");\n")
            headerFile.write("}\n\n")

        for methodName, details in GameMetaData["Methods"].items():
            arguments = [(arg.split(" "))for arg in details["Return"]]
            arguments.extend([(arg.split(" "))for arg in details["Args"]])
            WriteMethodCpp(methodName, arguments)

        headerFile.write("\n")

        # generate cpp wrappers
        for methodName, details in GameMetaData["Methods"].items():
            arguments = [(arg.split(" "))for arg in details["Return"]]
            arguments.extend([(arg.split(" "))for arg in details["Args"]])
            WriteMethodCppWrapper(methodName, arguments)

        # generate validity checkers
        for methodName, methodMembers in GameMetaData["Methods"].items():
            headerFile.write(
                "\ninline bool {}IsValid(const {}::{}& message) {{\n".format(methodName, PackageName, methodName))
            headerFile.write("\t\tif(!ObjectIsValid(&message)){return false;};\n")
            for arg in methodMembers["Return"]:
                headerFile.write("\t\tif(!ObjectIsValid(&message.{}())){{return false;}};\n".format(arg.split(' ')[-1].lower()))
            for arg in methodMembers["Args"]:
                headerFile.write("\t\tif(!ObjectIsValid(&message.{}())){{return false;}};\n".format(arg.split(' ')[-1].lower())) #.lower())
            headerFile.write("\t\treturn true;\n")
            headerFile.write("}\n")


        headerFile.write("\ninline bool MethodIsValid(const {}::Method& method){{\n\t{}}}\n\treturn false;\n}}\n".format(
            PackageName,
            "} else ".join([
                "if(method.has_{}()){{\n\t\treturn {}IsValid(method.{}());\n\t".format(methodName.lower(), methodName, methodName.lower()) for methodName, methodMembers in GameMetaData["Methods"].items()
            ]
            ))
        )

        def ExecuteMethod(methodName: str, methodMembers: dict):
            code="if(begin->has_{}()){{\n".format(methodName.lower())
            # code+=Assertions("begin->", methodName, methodMembers)
            code+="\t\treturn {}(instance, begin + 1, end, begin->mutable_{}());\n\t".format(methodName, methodName.lower())
            return code

        headerFile.write("\ninline bool ExecuteMethods(GameInstance* instance, MethodIter begin, const MethodIter& end){{\n\t{}}}\n\treturn false;\n}}\n".format(
            "assert(instance);\n"+
            "\tif(begin == end) {\n\t\treturn true;\n\t}\n" +
            "\tassert(MethodIsValid(*begin));\n\t"+
            "} else ".join([
                ExecuteMethod(methodName, details) for methodName, details in GameMetaData["Methods"].items()
            ]
            ))
        )

        # generate path resolvers


        sourceFile.write("\n} // namespace IO")
        headerFile.write("\n} // namespace IO")


with open("Source/IOEngine/GameInstance_GENERATED.cpp", 'w') as sourceFile:
    sourceFile.write(open("GeneraterBaseFiles/GameInstanceSourceBase").read().format(**{
        "PACKAGE_NAME": PackageName,
    }))

    # # resolve paths
    # sourceFile.write("\n")
    # for name, vtype in ValueTypes.items():
    #     for mem, memType in vtype.members:
    #         sourceFile.write("")
            
    # for name, vtype in ClassTypes.items():
    #     pass
    # for methodName, details in GameMetaData["Methods"].items():
    #     members = dict()
    #     for arg in details["Return"] + details["Args"]:
    #         ctype, name = arg.split(" ")
    #         members[name] = ProtoType(ctype)
    #     initializerTypes.append((methodName, "func", members, False))

    # mutations
    switch = "\nvoid GameInstance::ApplyMutation({}::Mutation* mutation){{\n\t{}}}\n}}\n".format(
        PackageName, "} else ".join([
            "if(mutation->has_{}()){{\n\t\tApply_{}(this, mutation->mutable_{}());\n\t".format(x.lower(), x, x.lower()) for x in Mutators
        ]
        ))
    sourceFile.write(switch)
    sourceFile.write(switch.replace("Apply", "Revert"))
    sourceFile.write("\n} // namespace IO")


with open("Include/IOEngine/Types_GENERATED.hpp", 'w') as headerFile:
    headerFile.write("#pragma once\n")
    headerFile.write("#include <GRPC/GameState.pb.h>\n")
    headerFile.write("#include <IOEngine/Util.hpp>\n")
    headerFile.write("\n")
    headerFile.write("namespace IO {\n")
    with open("Source/IOEngine/Types_GENERATED.cpp", 'w') as sourceFile:
        sourceFile.write("#include <IOEngine/Types_GENERATED.hpp>\n")
        sourceFile.write("\n")
        sourceFile.write("namespace IO {\n")

        def BuildListInitializer(name: str):
            # list
            ConstructorHeader = "{PACKAGE_NAME}::List_{NAME}* Initialize({PACKAGE_NAME}::List_{NAME}* obj, const {PACKAGE_NAME}::ObjectPath& root, const std::string& name)".format(**{
                "NAME": name,
                "PACKAGE_NAME": PackageName,
            })
            headerFile.write("{};\n".format(ConstructorHeader))
            sourceFile.write(ConstructorHeader)
            sourceFile.write("{\n")
            sourceFile.write("\tobj->set_name(name);\n")
            sourceFile.write("\tobj->mutable_abspath()->CopyFrom(root);\n")
            sourceFile.write("\tobj->mutable_abspath()->add_path(name);\n")
            sourceFile.write("\tobj->mutable_abspath()->set_object_type({}::TYPE_LIST_{});\n".format(PackageName, name.upper()))
            sourceFile.write("\tassert(ObjectIsValid(obj));\n")
            sourceFile.write("\treturn obj;\n")
            sourceFile.write("}\n")
        BuildListInitializer("ObjectPath")
        BuildListInitializer("Method")

        initializerTypes = [(name, vtype.Type, vtype.Members, True) for name, vtype in ValueTypes.items()]
        for methodName, details in GameMetaData["Methods"].items():
            # print(methodName)
            members = dict()
            for arg in details["Return"] + details["Args"]:
                ctype, name = arg.split(" ")
                members[name] = ProtoType(ctype)
                # print("\t{}".format(name, members[name]))
            initializerTypes.append((methodName, "func", members, False))

        for name, vtype, members, buildList in initializerTypes:
            if name == "ObjectPath":
                continue
            ConstructorHeader = "{PACKAGE_NAME}::{NAME}* Initialize({PACKAGE_NAME}::{NAME}* obj, const {PACKAGE_NAME}::ObjectPath& root, const std::string& name)".format(**{
                "NAME": name,
                "PACKAGE_NAME": PackageName,
            })
            headerFile.write("{};\n".format(ConstructorHeader))
            sourceFile.write(ConstructorHeader)
            sourceFile.write("{\n")
            sourceFile.write("\tobj->set_name(name);\n")
            sourceFile.write("\tobj->mutable_abspath()->CopyFrom(root);\n")
            sourceFile.write("\tobj->mutable_abspath()->add_path(name);\n")
            sourceFile.write("\tobj->mutable_abspath()->set_object_type({}::TYPE_{});\n".format(PackageName, name.upper()))
            if vtype != "enum":
                for memName, memType in members.items():
                    protoType = ProtoType(memType)
                    if memName == "AbsPath" or memName == "Name":
                        continue
                    if protoType == "ObjectPath":
                        continue
                    if protoType not in ["int32", "string", "bool"]:
                        sourceFile.write("\tInitialize(obj->mutable_{}(), obj->abspath(), \"{}\");\n".format(
                            memName.lower(), memName))
            sourceFile.write("\tassert(ObjectIsValid(obj));\n")
            sourceFile.write("\treturn obj;\n")
            sourceFile.write("}\n")
            if buildList and name != "GameState":
                BuildListInitializer(name)

        for name, vtype in ClassTypes.items():
            ConstructorHeader = "{PACKAGE_NAME}::{NAME}* Initialize({PACKAGE_NAME}::{NAME}* obj, const {PACKAGE_NAME}::ObjectPath& root, const std::string& name)".format(**{
                "NAME": name,
                "PACKAGE_NAME": PackageName,
            })
            headerFile.write("{};\n".format(ConstructorHeader))
            sourceFile.write(ConstructorHeader)
            sourceFile.write("{\n")
            if name != "GameState":
                sourceFile.write("\tobj->set_name(name);\n")
                sourceFile.write("\tobj->mutable_abspath()->CopyFrom(root);\n")
                sourceFile.write("\tobj->mutable_abspath()->add_path(name);\n")
            sourceFile.write("\tobj->mutable_abspath()->set_object_type({}::ObjectType::TYPE_{});\n".format(PackageName, name.upper()))
            for memName, memType in vtype.Members.items():
                protoType = ProtoType(memType)
                # print(memName, protoType)
                if memName == "AbsPath" or memName == "Name":
                    continue
                if protoType == "ObjectPath":
                    continue
                if protoType not in ["int32", "string", "bool"]:
                    sourceFile.write("\tInitialize(obj->mutable_{}(), obj->abspath(), \"{}\");\n".format(
                        memName.lower(), memName))
            if name != "GameState":
                sourceFile.write("\tassert(ObjectIsValid(obj));\n")
            sourceFile.write("\treturn obj;\n")
            sourceFile.write("}\n")
            BuildListInitializer(name)

        sourceFile.write("\n} // namespace IO")
        headerFile.write("\n} // namespace IO")


with open("Source/IOEngine/Mutation_GENERATED.cpp", 'w') as sourceFile:
    sourceFile.write(open("GeneraterBaseFiles/MutationSourceBase").read().format(**{
        "PACKAGE_NAME": PackageName,
    }))
    sourceFile.write("\n\n".join(
        vt.MutatorSource for name, vt in ValueTypes.items()))
    sourceFile.write("\n")

    with open("Include/IOEngine/Mutation_GENERATED.hpp", 'w') as headerFile:
        headerFile.write(open("GeneraterBaseFiles/MutationHeaderBase").read().format(**{
            "PACKAGE_NAME": PackageName,
        }))

        headerFile.write("\n\n".join(
            vt.MutatorHeader for name, vt in ValueTypes.items()))
        headerFile.write("\n\n")

        # object path is special
        baseTypes = [x for x in ValueTypes.keys() if x != "ObjectPath"]

        # set
        setMutationDecl = "void Set(GameInstance* instance, {PACKAGE_NAME}::ObjectPath* object, const {PACKAGE_NAME}::ObjectPath* value)".format(**{
            "PACKAGE_NAME": PackageName,
        })
        headerFile.write("{};\n".format(setMutationDecl))
        setMutationSource  = "\tassert(ObjectIsValid(object));\n"
        setMutationSource += "\tassert(ObjectIsValid(value));\n"
        setMutationSource += "\tauto* mutation = instance->currentHistory_->add_mutations()->mutable_objectpath_set_mutation();\n"
        setMutationSource += "\tmutation->mutable_path()->CopyFrom(*object);\n"
        setMutationSource += "\tmutation->mutable_newvalue()->CopyFrom(*value);\n"
        setMutationSource += "\tmutation->mutable_oldvalue()->CopyFrom(*object);\n"
        setMutationSource += "\tApply_ObjectPath_Set_Mutation(instance, mutation);\n"
        sourceFile.write("{} {{\n{}}}\n".format(setMutationDecl, setMutationSource))

        # insert
        setMutationDecl = "void Append(GameInstance* instance, {PACKAGE_NAME}::List_ObjectPath* object, const {PACKAGE_NAME}::ObjectPath* value)".format(**{
            "PACKAGE_NAME": PackageName,
        })
        headerFile.write("{};\n".format(setMutationDecl))
        setMutationSource  = "\tassert(ObjectIsValid(object));\n"
        setMutationSource += "\tassert(ObjectIsValid(value));\n"
        setMutationSource += "\tauto* mutation = instance->currentHistory_->add_mutations()->mutable_list_objectpath_insert_mutation();\n"
        setMutationSource += "\tmutation->mutable_path()->CopyFrom(object->abspath());\n"
        setMutationSource += "\tmutation->mutable_newvalue()->CopyFrom(*value);\n"
        setMutationSource += "\tmutation->set_index(object->element_size());\n"
        setMutationSource += "\tApply_List_ObjectPath_Insert_Mutation(instance, mutation);\n"
        sourceFile.write("{} {{\n{}}}\n".format(setMutationDecl, setMutationSource))

        # remove
        setMutationDecl = "void Remove(GameInstance* instance, {PACKAGE_NAME}::List_ObjectPath* object, const {PACKAGE_NAME}::ObjectPath* value)".format(**{
            "PACKAGE_NAME": PackageName,
        })
        headerFile.write("{};\n".format(setMutationDecl))
        setMutationSource  = "\tassert(ObjectIsValid(object));\n"
        setMutationSource += "\tassert(ObjectIsValid(value));\n"
        setMutationSource += "\tauto* mutation = instance->currentHistory_->add_mutations()->mutable_list_objectpath_remove_mutation();\n"
        setMutationSource += "\tmutation->mutable_path()->CopyFrom(object->abspath());\n"
        setMutationSource += "\tmutation->mutable_oldvalue()->CopyFrom(*value);\n"
        setMutationSource += "\tmutation->set_index(GetElementIndex(object->mutable_element(), value));\n"
        setMutationSource += "\tApply_List_ObjectPath_Remove_Mutation(instance, mutation);\n"
        sourceFile.write("{} {{\n{}}}\n".format(setMutationDecl, setMutationSource))

        for T in baseTypes + [x for x in ClassTypes.keys() if x != "GameState"]:
            setMutationDecl = "void Set(GameInstance* instance, {PACKAGE_NAME}::ObjectPath* object, const {PACKAGE_NAME}::{CLASS_NAME}* value)".format(**{
                "PACKAGE_NAME": PackageName,
                "CLASS_NAME": T
            })
            headerFile.write("{};\n".format(setMutationDecl))
            setMutationSource  = "\tassert(ObjectIsValid(object));\n"
            setMutationSource += "\tassert(ObjectIsValid(value));\n"
            setMutationSource += "\tauto* mutation = instance->currentHistory_->add_mutations()->mutable_objectpath_set_mutation();\n"
            setMutationSource += "\tmutation->mutable_path()->CopyFrom(*object);\n"
            setMutationSource += "\tmutation->mutable_newvalue()->CopyFrom(value->abspath());\n"
            setMutationSource += "\tmutation->mutable_oldvalue()->CopyFrom(*object);\n"
            setMutationSource += "\tApply_ObjectPath_Set_Mutation(instance, mutation);\n"
            sourceFile.write("{} {{\n{}}}\n".format(
                setMutationDecl, setMutationSource))

            # insert
            setMutationDecl = "void Append(GameInstance* instance, {PACKAGE_NAME}::List_ObjectPath* object, const {PACKAGE_NAME}::{CLASS_NAME}* value)".format(**{
                "PACKAGE_NAME": PackageName,
                "CLASS_NAME": T
            })
            headerFile.write("{};\n".format(setMutationDecl))
            setMutationSource  = "\tassert(ObjectIsValid(object));\n"
            setMutationSource += "\tassert(ObjectIsValid(value));\n"
            setMutationSource += "\tauto* mutation = instance->currentHistory_->add_mutations()->mutable_list_objectpath_insert_mutation();\n"
            setMutationSource += "\tmutation->mutable_path()->CopyFrom(object->abspath());\n"
            setMutationSource += "\tmutation->mutable_newvalue()->CopyFrom(value->abspath());\n"
            setMutationSource += "\tmutation->set_index(object->element_size());\n"
            setMutationSource += "\tApply_List_ObjectPath_Insert_Mutation(instance, mutation);\n"
            sourceFile.write("{} {{\n{}}}\n".format(
                setMutationDecl, setMutationSource))

            # remove
            setMutationDecl = "void Remove(GameInstance* instance, {PACKAGE_NAME}::List_ObjectPath* object, const {PACKAGE_NAME}::{CLASS_NAME}* value)".format(**{
                "PACKAGE_NAME": PackageName,
                "CLASS_NAME": T
            })
            headerFile.write("{};\n".format(setMutationDecl))
            setMutationSource  = "\tassert(ObjectIsValid(object));\n"
            setMutationSource += "\tassert(ObjectIsValid(value));\n"
            setMutationSource += "\tauto* mutation = instance->currentHistory_->add_mutations()->mutable_list_objectpath_remove_mutation();\n"
            setMutationSource += "\tmutation->mutable_path()->CopyFrom(object->abspath());\n"
            setMutationSource += "\tmutation->mutable_oldvalue()->CopyFrom(value->abspath());\n"
            setMutationSource += "\tmutation->set_index(GetElementIndex(object->mutable_element(), value));\n"
            setMutationSource += "\tApply_List_ObjectPath_Remove_Mutation(instance, mutation);\n"
            sourceFile.write("{} {{\n{}}}\n".format(
                setMutationDecl, setMutationSource))

        if "Integer" in baseTypes:
            setMutationDecl = "void Set(GameInstance* instance, {PACKAGE_NAME}::Integer* object, int value)".format(**{
                "PACKAGE_NAME": PackageName,
                "CLASS_NAME": T
            })
            headerFile.write("{};\n".format(setMutationDecl))
            setMutationSource  = "\tassert(ObjectIsValid(object));\n"
            setMutationSource += "\tauto* mutation = instance->currentHistory_->add_mutations()->mutable_integer_set_mutation();\n"
            setMutationSource += "\tmutation->mutable_path()->CopyFrom(object->abspath());\n"
            setMutationSource += "\tmutation->mutable_newvalue()->set_value(value);\n"
            setMutationSource += "\tmutation->mutable_oldvalue()->set_value(object->value());\n"
            setMutationSource += "\tApply_Integer_Set_Mutation(instance, mutation);\n"
            sourceFile.write("{} {{\n{}}}\n".format(
                setMutationDecl, setMutationSource))

        if "Boolean" in baseTypes:
            setMutationDecl = "void Set(GameInstance* instance, {PACKAGE_NAME}::Boolean* object, bool value)".format(**{
                "PACKAGE_NAME": PackageName,
                "CLASS_NAME": T
            })
            headerFile.write("{};\n".format(setMutationDecl))
            setMutationSource  = "\tassert(ObjectIsValid(object));\n"
            setMutationSource += "\tauto* mutation = instance->currentHistory_->add_mutations()->mutable_boolean_set_mutation();\n"
            setMutationSource += "\tmutation->mutable_path()->CopyFrom(object->abspath());\n"
            setMutationSource += "\tmutation->mutable_newvalue()->set_value(value);\n"
            setMutationSource += "\tmutation->mutable_oldvalue()->set_value(object->value());\n"
            setMutationSource += "\tApply_Boolean_Set_Mutation(instance, mutation);\n"
            sourceFile.write("{} {{\n{}}}\n".format(
                setMutationDecl, setMutationSource))

        if "Vec2i" in baseTypes:
            setMutationDecl = "void Set(GameInstance* instance, {PACKAGE_NAME}::Vec2i* object, const Vec2i& value)".format(**{
                "PACKAGE_NAME": PackageName,
                "CLASS_NAME": T
            })
            headerFile.write("{};\n".format(setMutationDecl))
            setMutationSource  = "\tassert(ObjectIsValid(object));\n"
            setMutationSource += "\tauto* mutation = instance->currentHistory_->add_mutations()->mutable_vec2i_set_mutation();\n"
            setMutationSource += "\tmutation->mutable_path()->CopyFrom(object->abspath());\n"
            setMutationSource += "\tmutation->mutable_newvalue()->set_x(value.x);\n"
            setMutationSource += "\tmutation->mutable_newvalue()->set_y(value.y);\n"
            setMutationSource += "\tmutation->mutable_oldvalue()->set_x(object->x());\n"
            setMutationSource += "\tmutation->mutable_oldvalue()->set_y(object->y());\n"
            setMutationSource += "\tApply_Vec2i_Set_Mutation(instance, mutation);\n"
            sourceFile.write("{} {{\n{}}}\n".format(
                setMutationDecl, setMutationSource))

        if "Terrain" in baseTypes:
            setMutationDecl = "void Set(GameInstance* instance, {PACKAGE_NAME}::Terrain* object, {PACKAGE_NAME}::Terrain::Terrain_Type value)".format(**{
                "PACKAGE_NAME": PackageName,
                "CLASS_NAME": T
            })
            headerFile.write("{};\n".format(setMutationDecl))
            setMutationSource  = "\tassert(ObjectIsValid(object));\n"
            setMutationSource += "\tauto* mutation = instance->currentHistory_->add_mutations()->mutable_terrain_set_mutation();\n"
            setMutationSource += "\tmutation->mutable_path()->CopyFrom(object->abspath());\n"
            setMutationSource += "\tmutation->mutable_newvalue()->set_value(value);\n"
            setMutationSource += "\tmutation->mutable_oldvalue()->set_value(object->value());\n"
            setMutationSource += "\tApply_Terrain_Set_Mutation(instance, mutation);\n"
            sourceFile.write("{} {{\n{}}}\n".format(
                setMutationDecl, setMutationSource))

        # can't mutate classes, only the value types in classes
        for T in baseTypes:
            # set
            setMutationDecl = "void Set(GameInstance* instance, {PACKAGE_NAME}::{CLASS_NAME}* object, const {PACKAGE_NAME}::{CLASS_NAME}* value)".format(**{
                "PACKAGE_NAME": PackageName,
                "CLASS_NAME": T
            })
            headerFile.write("{};\n".format(setMutationDecl))
            setMutationSource  = "\tassert(ObjectIsValid(object));\n"
            setMutationSource += "\tassert(ObjectIsValid(value));\n"
            setMutationSource += "\tauto* mutation = instance->currentHistory_->add_mutations()->mutable_{}_set_mutation();\n".format(T.lower())
            setMutationSource += "\tmutation->mutable_path()->CopyFrom(object->abspath());\n"
            for member in ValueTypes[T].Members:
                setMutationSource += "\tmutation->mutable_newvalue()->set_{MEM}(value->{MEM}());\n".format(**{
                    "MEM": member.lower()})
                setMutationSource += "\tmutation->mutable_oldvalue()->set_{MEM}(object->{MEM}());\n".format(**{
                    "MEM": member.lower()})
            setMutationSource += "\tApply_{}_Set_Mutation(instance, mutation);\n".format(
                T)
            sourceFile.write("{} {{\n{}}}\n".format(
                setMutationDecl, setMutationSource))

            # insert
            setMutationDecl = "void Append(GameInstance* instance, {PACKAGE_NAME}::List_{CLASS_NAME}* object, const {PACKAGE_NAME}::{CLASS_NAME}* value)".format(**{
                "PACKAGE_NAME": PackageName,
                "CLASS_NAME": T
            })
            headerFile.write("{};\n".format(setMutationDecl))
            setMutationSource  = "\tassert(ObjectIsValid(object));\n"
            setMutationSource += "\tassert(ObjectIsValid(value));\n"
            setMutationSource += "\tauto* mutation = instance->currentHistory_->add_mutations()->mutable_list_{}_insert_mutation();\n".format(T.lower())
            setMutationSource += "\tmutation->mutable_path()->CopyFrom(object->abspath());\n"
            for member in ValueTypes[T].Members:
                setMutationSource += "\tmutation->mutable_newvalue()->set_{MEM}(value->{MEM}());\n".format(**{
                    "MEM": member.lower()})
            setMutationSource += "\tmutation->mutable_newvalue()->mutable_abspath()->CopyFrom(object->abspath());\n"
            setMutationSource += "\tmutation->mutable_newvalue()->mutable_abspath()->add_path(value->name());\n"
            setMutationSource += "\tmutation->set_index(object->element_size());\n"
            setMutationSource += "\tApply_List_{}_Insert_Mutation(instance, mutation);\n".format(
                T)
            sourceFile.write("{} {{\n{}}}\n".format(
                setMutationDecl, setMutationSource))

            # remove
            setMutationDecl = "void Remove(GameInstance* instance, {PACKAGE_NAME}::List_{CLASS_NAME}* object, const {PACKAGE_NAME}::{CLASS_NAME}* value)".format(**{
                "PACKAGE_NAME": PackageName,
                "CLASS_NAME": T
            })
            headerFile.write("{};\n".format(setMutationDecl))
            setMutationSource  = "\tassert(ObjectIsValid(object));\n"
            setMutationSource += "\tassert(ObjectIsValid(value));\n"
            setMutationSource += "\tauto* mutation = instance->currentHistory_->add_mutations()->mutable_list_{}_remove_mutation();\n".format(T.lower())
            setMutationSource += "\tmutation->mutable_path()->CopyFrom(object->abspath());\n"
            setMutationSource += "\tmutation->mutable_oldvalue()->CopyFrom(*value);\n"
            setMutationSource += "\tconst int index = GetElementIndex(object->mutable_element(), value);\n"
            setMutationSource += "\tassert(index >= 0);\n"
            setMutationSource += "\tassert(index < object->element_size());\n"
            setMutationSource += "\tmutation->set_index(index);\n"
            setMutationSource += "\tApply_List_{}_Remove_Mutation(instance, mutation);\n".format(T)
            sourceFile.write("{} {{\n{}}}\n".format(
                setMutationDecl, setMutationSource))

        sourceFile.write("\n} // namespace IO")
        headerFile.write("\n} // namespace IO")
