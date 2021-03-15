
java -jar antlr-4.8-complete.jar \
    -Dlanguage=Cpp -no-listener -visitor \
    -lib . \
    -o Source/Antlr4 IvionGrammar/Ivion.antlr4 
mv Source/Antlr4/IvionGrammar/*.h Include/IOEngine/Antlr4
sed -i 's!#include "!#include "IOEngine/Antlr4/!g' Source/Antlr4/IvionGrammar/*.cpp


# 614 917 4070
# Adam Burr
# claim number: 587 745

# rental: ZGT0S2
# #703-331-5616
# 7823 sudely rd.

