import os, shutil

try:
    os.mkdir("Antlr4Runtime/Source")
except FileExistsError:
    pass

try:
    os.mkdir("Antlr4Runtime/Include")
except FileExistsError:
    pass
    

for root, dirnames, filenames in os.walk("Antlr4Runtime/runtime/src"):
    relativeRoot = root[len("Antlr4Runtime/runtime/src/"):]
    try:
        os.mkdir(os.path.join("Antlr4Runtime/Source", relativeRoot))
    except FileExistsError:
        pass
    try:
        os.mkdir(os.path.join("Antlr4Runtime/Include", relativeRoot))
    except FileExistsError:
        pass
        
    for filename in filenames:
        sourcepath = os.path.join(root, filename)
        _, ext = os.path.splitext(filename)

        if ext == ".cpp":
            targetpath = os.path.join("Antlr4Runtime/Source", relativeRoot, filename)
        if ext == ".h":
            targetpath = os.path.join("Antlr4Runtime/Include", relativeRoot, filename)
        # print(root)
        print("Moving '{}' -> '{}'".format(sourcepath, targetpath))
        shutil.copy(sourcepath, targetpath)

# Headers = dict()
replacements = list()
for root, dirnames, filenames in os.walk("Antlr4Runtime/Include"):
    for filename in filenames:
        rootPath = root[len("Antlr4Runtime/Include/"):]
        newPath = os.path.join(rootPath, filename)
        replacements.append("'s!^#include \"{}\".*$!#include \"{}\"!g'".format(filename, newPath))
        replacements.append("'s!^#include \"(\w/)*?{}\".*$!#include \"{}\"!g'".format(filename, newPath))
        #
replacements.sort(key=len, reverse=True)

allReplacements = " -e ".join(replacements)
for root, dirnames, filenames in os.walk("Antlr4Runtime/Source"):
    for filename in filenames:
        sed_command = "sed -i -e {} {}".format(allReplacements, os.path.join(root, filename))
        os.system(sed_command)






