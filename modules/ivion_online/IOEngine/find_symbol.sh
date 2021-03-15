#!/bin/bash

DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )"
echo "Searching for symbol '$1'"
for lib in $(find "${DIR}/Extern/Install" -name \*.a) ; do echo "$lib" ; nm "$lib" | grep "$1" | grep -v " U "   ; done