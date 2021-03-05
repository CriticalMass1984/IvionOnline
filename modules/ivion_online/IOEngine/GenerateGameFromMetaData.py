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
        if self.Name != "ObjectPath":
            self.ProtoMembers.append("\tObjectPath AbsPath = {};".format(len(self.ProtoMembers) + 1))
            self.ProtoMembers.append("\tstring Name = {};".format(len(self.ProtoMembers) + 1))
        
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
        self.MutatorSource = ValueType.mutationSourceBase.format(**{
            "NAME": self.Name,
            "PACKAGE_NAME": PackageName,
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
            raise RuntimeError("BAD TYPE! {} - {}".format(T, Type))
    return "{}::{}*".format(PackageName, Type)


class ClassType:
    headerBase = open("GeneraterBaseFiles/ValueTypeHeader").read()
    protoBase = open("GeneraterBaseFiles/ValueTypeProtoBase").read()

    def __init__(self, name: str, cType: dict):
        self.Name = name
        self.ProtoMembers = ["\t{} {} = {};".format(ProtoType(T), name, i + 1) for
                             (name, T), i in zip(cType.items(), range(len(cType)))]
        self.ProtoMembers.append("\tObjectPath AbsPath = {};".format(len(self.ProtoMembers) + 1))
        self.ProtoMembers.append("\tstring Name = {};".format(len(self.ProtoMembers) + 1))

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
    headerFile.write(
        "using MethodIter = google::protobuf::internal::RepeatedPtrIterator<{}::Method>;\n\n".format(PackageName))

    def ResolveType(argType: str, argName: str):
        protoType = [x for x in TypeRegex.split(argType) if x != ""]
        assert(len(protoType) <= 3)
        if len(protoType) == 1:
            return "message->mutable_{}()".format(argName.lower())
        elif len(protoType) == 2:
            if protoType[0] == "Ref":
                return "dynamic_cast<{}::{}*>(instance->ResolvePath(message->mutable_{}()))".format(PackageName, protoType[1], argName.lower())
            if protoType[0] == "List":
                return "message->mutable_{}()".format(argName.lower())
        elif len(protoType) == 3:
            assert(protoType[0] == "Ref")
            assert(protoType[1] == "List")
            assert(protoType[2] == "ObjectPath")
            return "dynamic_cast<{}::List_ObjectPath*>(instance->ResolvePath(message->mutable_{}()))".format(PackageName, argName.lower())

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

    for methodName, details in GameMetaData["Methods"].items():
        arguments = [(arg.split(" "))for arg in details["Return"]]
        arguments.extend([(arg.split(" "))for arg in details["Args"]])
        WriteMethodCppWrapper(methodName, arguments)

    headerFile.write("\ninline bool ExecuteMethods(GameInstance* instance, MethodIter begin, const MethodIter& end){{\n\t{}}}\n\treturn false;\n}}\n".format(
        "if(begin == end) {\n\t\treturn true;\n\t}\n\t" +
        "} else ".join([
            "if(begin->has_{}()){{\n\t\treturn {}(instance, begin + 1, end, begin->mutable_{}());\n\t".format(methodName.lower(), methodName, methodName.lower()) for methodName in GameMetaData["Methods"].keys()
        ]
        ))
    )
    headerFile.write("\n} // namespace IO")


with open("Source/IOEngine/GameInstance_GENERATED.cpp", 'w') as sourceFile:
    sourceFile.write(open("GeneraterBaseFiles/GameInstanceSourceBase").read().format(**{
        "PACKAGE_NAME": PackageName,
    }))

    switch = "\nvoid GameInstance::ApplyMutation({}::Mutation* mutation){{\n\t{}}}\n}}\n".format(
        PackageName, "} else ".join([
            "if(mutation->has_{}()){{\n\t\tApply_{}(this, mutation->mutable_{}());\n\t".format(x.lower(), x, x.lower()) for x in Mutators
        ]
        ))
    sourceFile.write(switch)
    sourceFile.write(switch.replace("Apply", "Revert"))
    sourceFile.write("\n} // namespace IO")


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

        # insert
        setMutationDecl = "void Append(GameInstance* instance, {PACKAGE_NAME}::List_ObjectPath* object, const {PACKAGE_NAME}::ObjectPath* value)".format(**{
            "PACKAGE_NAME": PackageName,
        })
        headerFile.write("{};\n".format(setMutationDecl))
        setMutationSource  = "\tauto* mutation = instance->currentHistory_->add_mutations()->mutable_list_objectpath_insert_mutation();\n"
        setMutationSource += "\tmutation->mutable_newvalue()->CopyFrom(*value);\n"
        setMutationSource += "\tmutation->set_index(object->element_size());\n"
        setMutationSource += "\tApply_List_ObjectPath_Insert_Mutation(instance, mutation);\n"
        sourceFile.write("{} {{\n{}}}\n".format(setMutationDecl, setMutationSource))

        #remove
        setMutationDecl = "void Remove(GameInstance* instance, {PACKAGE_NAME}::List_ObjectPath* object, const {PACKAGE_NAME}::ObjectPath* value)".format(**{
            "PACKAGE_NAME": PackageName,
        })
        headerFile.write("{};\n".format(setMutationDecl))
        setMutationSource  = "\tauto* mutation = instance->currentHistory_->add_mutations()->mutable_list_objectpath_remove_mutation();\n"
        setMutationSource += "\tmutation->mutable_oldvalue()->CopyFrom(*value);\n"
        setMutationSource += "\tmutation->set_index(GetElementIndex(object->mutable_element(), value));\n"
        setMutationSource += "\tApply_List_ObjectPath_Remove_Mutation(instance, mutation);\n"
        sourceFile.write("{} {{\n{}}}\n".format(setMutationDecl, setMutationSource))

        for T in baseTypes + [x for x in ClassTypes.keys() if x != "GameState"]:
            setMutationDecl = "void Set(GameInstance* instance, {PACKAGE_NAME}::ObjectPath* object, const {PACKAGE_NAME}::{CLASS_NAME}* target)".format(**{
                "PACKAGE_NAME": PackageName,
                "CLASS_NAME": T
            })
            headerFile.write("{};\n".format(setMutationDecl))
            setMutationSource  = "\tauto* mutation = instance->currentHistory_->add_mutations()->mutable_objectpath_set_mutation();\n"
            setMutationSource += "\tmutation->mutable_newvalue()->CopyFrom(target->abspath());\n"
            setMutationSource += "\tmutation->mutable_oldvalue()->CopyFrom(*object);\n"
            setMutationSource += "\tApply_ObjectPath_Set_Mutation(instance, mutation);\n"
            sourceFile.write("{} {{\n{}}}\n".format(setMutationDecl, setMutationSource))

            #insert
            setMutationDecl = "void Append(GameInstance* instance, {PACKAGE_NAME}::List_ObjectPath* object, const {PACKAGE_NAME}::{CLASS_NAME}* value)".format(**{
                "PACKAGE_NAME": PackageName,
                "CLASS_NAME": T
            })
            headerFile.write("{};\n".format(setMutationDecl))
            setMutationSource  = "\tauto* mutation = instance->currentHistory_->add_mutations()->mutable_list_objectpath_insert_mutation();\n"
            setMutationSource += "\tmutation->mutable_newvalue()->CopyFrom(value->abspath());\n"
            setMutationSource += "\tmutation->set_index(object->element_size());\n"
            setMutationSource += "\tApply_List_ObjectPath_Insert_Mutation(instance, mutation);\n"
            sourceFile.write("{} {{\n{}}}\n".format(setMutationDecl, setMutationSource))

            #remove
            setMutationDecl = "void Remove(GameInstance* instance, {PACKAGE_NAME}::List_ObjectPath* object, const {PACKAGE_NAME}::{CLASS_NAME}* value)".format(**{
                "PACKAGE_NAME": PackageName,
                "CLASS_NAME": T
            })
            headerFile.write("{};\n".format(setMutationDecl))
            setMutationSource  = "\tauto* mutation = instance->currentHistory_->add_mutations()->mutable_list_objectpath_remove_mutation();\n"
            setMutationSource += "\tmutation->mutable_oldvalue()->CopyFrom(value->abspath());\n"
            setMutationSource += "\tmutation->set_index(GetElementIndex(object->mutable_element(), value));\n"
            setMutationSource += "\tApply_List_ObjectPath_Remove_Mutation(instance, mutation);\n"
            sourceFile.write("{} {{\n{}}}\n".format(setMutationDecl, setMutationSource))

        if "Integer" in baseTypes:
            setMutationDecl = "void Set(GameInstance* instance, {PACKAGE_NAME}::Integer* object, int value)".format(**{
                "PACKAGE_NAME": PackageName,
                "CLASS_NAME": T
            })
            headerFile.write("{};\n".format(setMutationDecl))
            setMutationSource  = "\tauto* mutation = instance->currentHistory_->add_mutations()->mutable_integer_set_mutation();\n"
            setMutationSource += "\tmutation->mutable_newvalue()->CopyFrom(*object);\n"
            setMutationSource += "\tmutation->mutable_newvalue()->set_value(value);\n"
            setMutationSource += "\tmutation->mutable_oldvalue()->CopyFrom(*object);\n"
            setMutationSource += "\tApply_Integer_Set_Mutation(instance, mutation);\n"
            sourceFile.write("{} {{\n{}}}\n".format(setMutationDecl, setMutationSource))
            
        if "Boolean" in baseTypes:
            setMutationDecl = "void Set(GameInstance* instance, {PACKAGE_NAME}::Integer* object, bool value)".format(**{
                "PACKAGE_NAME": PackageName,
                "CLASS_NAME": T
            })
            headerFile.write("{};\n".format(setMutationDecl))
            setMutationSource  = "\tauto* mutation = instance->currentHistory_->add_mutations()->mutable_boolean_set_mutation();\n"
            setMutationSource += "\tmutation->mutable_newvalue()->CopyFrom(*object);\n"
            setMutationSource += "\tmutation->mutable_newvalue()->set_value(value);\n"
            setMutationSource += "\tmutation->mutable_oldvalue()->CopyFrom(*object);\n"
            setMutationSource += "\tApply_Boolean_Set_Mutation(instance, mutation);\n"
            sourceFile.write("{} {{\n{}}}\n".format(setMutationDecl, setMutationSource))

        if "Vec2i" in baseTypes:
            setMutationDecl = "void Set(GameInstance* instance, {PACKAGE_NAME}::Vec2i* object, const Vec2i& value)".format(**{
                "PACKAGE_NAME": PackageName,
                "CLASS_NAME": T
            })
            headerFile.write("{};\n".format(setMutationDecl))
            setMutationSource  = "\tauto* mutation = instance->currentHistory_->add_mutations()->mutable_vec2i_set_mutation();\n"
            setMutationSource += "\tmutation->mutable_newvalue()->CopyFrom(*object);\n"
            setMutationSource += "\tmutation->mutable_newvalue()->set_x(value.x);\n"
            setMutationSource += "\tmutation->mutable_newvalue()->set_y(value.y);\n"
            setMutationSource += "\tmutation->mutable_oldvalue()->CopyFrom(*object);\n"
            setMutationSource += "\tApply_Vec2i_Set_Mutation(instance, mutation);\n"
            sourceFile.write("{} {{\n{}}}\n".format(setMutationDecl, setMutationSource))
        
        if "Terrain" in baseTypes:
            setMutationDecl = "void Set(GameInstance* instance, {PACKAGE_NAME}::Terrain* object, {PACKAGE_NAME}::Terrain::Terrain_Type value)".format(**{
                "PACKAGE_NAME": PackageName,
                "CLASS_NAME": T
            })
            headerFile.write("{};\n".format(setMutationDecl))
            setMutationSource  = "\tauto* mutation = instance->currentHistory_->add_mutations()->mutable_terrain_set_mutation();\n"
            setMutationSource += "\tmutation->mutable_newvalue()->CopyFrom(*object);\n"
            setMutationSource += "\tmutation->mutable_newvalue()->set_value(value);\n"
            setMutationSource += "\tmutation->mutable_oldvalue()->CopyFrom(*object);\n"
            setMutationSource += "\tApply_Terrain_Set_Mutation(instance, mutation);\n"
            sourceFile.write("{} {{\n{}}}\n".format(setMutationDecl, setMutationSource))

        # can't mutate classes, only the value types in classes
        for T in baseTypes:
            # set
            setMutationDecl = "void Set(GameInstance* instance, {PACKAGE_NAME}::{CLASS_NAME}* object, const {PACKAGE_NAME}::{CLASS_NAME}* value)".format(**{
                "PACKAGE_NAME": PackageName,
                "CLASS_NAME": T
            })
            headerFile.write("{};\n".format(setMutationDecl))
            setMutationSource  = "\tauto* mutation = instance->currentHistory_->add_mutations()->mutable_{}_set_mutation();\n".format(T.lower())
            setMutationSource += "\tmutation->mutable_newvalue()->CopyFrom(*value);\n"
            setMutationSource += "\tmutation->mutable_oldvalue()->CopyFrom(*object);\n"
            setMutationSource += "\tApply_{}_Set_Mutation(instance, mutation);\n".format(T)
            sourceFile.write("{} {{\n{}}}\n".format(setMutationDecl, setMutationSource))

            # insert
            setMutationDecl = "void Append(GameInstance* instance, {PACKAGE_NAME}::List_{CLASS_NAME}* object, const {PACKAGE_NAME}::{CLASS_NAME}* value)".format(**{
                "PACKAGE_NAME": PackageName,
                "CLASS_NAME": T
            })
            headerFile.write("{};\n".format(setMutationDecl))
            setMutationSource  = "\tauto* mutation = instance->currentHistory_->add_mutations()->mutable_list_{}_insert_mutation();\n".format(T.lower())
            setMutationSource += "\tmutation->mutable_newvalue()->CopyFrom(*value);\n"
            setMutationSource += "\tmutation->mutable_newvalue()->mutable_abspath()->CopyFrom(object->abspath());\n"
            setMutationSource += "\tmutation->mutable_newvalue()->mutable_abspath()->add_path(value->name());\n"
            setMutationSource += "\tmutation->set_index(object->element_size());\n"
            setMutationSource += "\tApply_List_{}_Insert_Mutation(instance, mutation);\n".format(T)
            sourceFile.write("{} {{\n{}}}\n".format(setMutationDecl, setMutationSource))

            #remove
            setMutationDecl = "void Remove(GameInstance* instance, {PACKAGE_NAME}::List_{CLASS_NAME}* object, const {PACKAGE_NAME}::{CLASS_NAME}* value)".format(**{
                "PACKAGE_NAME": PackageName,
                "CLASS_NAME": T
            })
            headerFile.write("{};\n".format(setMutationDecl))
            setMutationSource  = "\tauto* mutation = instance->currentHistory_->add_mutations()->mutable_list_{}_remove_mutation();\n".format(T.lower())
            setMutationSource += "\tmutation->mutable_oldvalue()->CopyFrom(*value);\n"
            setMutationSource += "\tmutation->set_index(GetElementIndex(object->mutable_element(), value));\n"
            setMutationSource += "\tApply_List_{}_Remove_Mutation(instance, mutation);\n".format(T)
            sourceFile.write("{} {{\n{}}}\n".format(setMutationDecl, setMutationSource))

        sourceFile.write("\n} // namespace IO")
        headerFile.write("\n} // namespace IO")

