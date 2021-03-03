import json
import os

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
            "TYPE_Ref_List_Ref_{}"
        ]]
        self.MutatorSource = ValueType.mutationSourceBase.format(**{
            "NAME": self.Name,
            "PACKAGE_NAME": PackageName,
        })


class ObjectType:
    def __init__(self):
        pass


Types = list()
Mutators = list()

# read value types
ValueTypes = dict()
for name, value in GameMetaData["ValueTypes"].items():
    VT = ValueType(name, value)
    ValueTypes[name] = VT
    Types.extend(VT.Types)
    Mutators.extend(VT.Mutators)


# build protofile
with open("Protobuf/Type.proto", 'w') as protoFile:
    baseProto = open("GeneraterBaseFiles/TypesProtoBase").read().format(**{
        "PACKAGE_NAME": PackageName,
        "TYPES": "\n".join(["\t{} = {};".format(x, i) for x, i in zip(Types, range(len(Types)))])
    })
    protoFile.write(baseProto)
    for name, vt in ValueTypes.items():
        protoFile.write(vt.Proto)

with open("Protobuf/Mutation.proto", 'w') as protoFile:
    baseProto = open("GeneraterBaseFiles/MutationProtoBase").read().format(**{
        "PACKAGE_NAME": PackageName,
    })
    protoFile.write(baseProto)
    for name, vt in ValueTypes.items():
        protoFile.write(vt.MutationProto)

    protoFile.write("\nmessage Mutation\n{{\n\toneof mut{{\n{}\n\t}}\n}}\n".format("\n".join(
        ["\t\t{} {} = {};".format(x, x, i+1)
         for x, i in zip(Mutators, range(len(Mutators)))]
    )))


# with open("Protobuf/Class.proto", 'w') as protoFile:
#     pass


# with open("Protobuf/Effect.proto", 'w') as protoFile:
#     pass


with open("Source/IOEngine/Effect_GENERATED.hpp", 'w') as headerFile:
    pass


with open("Source/IOEngine/GameInstance_Generated.cpp", 'w') as sourceFile:
    baseProto = open("GeneraterBaseFiles/GameInstanceSourceBase").read().format(**{
        "PACKAGE_NAME": PackageName,
    })
    sourceFile.write(baseProto)
    sourceFile.write("\nnamespace IO {\n")
    sourceFile.write("\n\n".join(vt.MutatorSource for name, vt in ValueTypes.items()))

    switch = "\nvoid GameInstance::ApplyMutation({}::Mutation* mutation){{\n\t{}}}\n}}\n".format(
        PackageName, "} else ".join([
            "if(mutation->has_{}()){{\n\t\tApply_{}(this, mutation->mutable_{}());\n\t".format(x.lower(), x, x.lower()) for x in Mutators
        ]
        ))
    sourceFile.write(switch)
    sourceFile.write(switch.replace("Apply", "Revert"))
    sourceFile.write("\n} // namespace IO")
