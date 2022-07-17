#!/bin/bash
#TESTFILE="$1"
#DIRNAME=$(dirname "${TESTFILE}")
#BASENAME=$(basename "${TESTFILE}" .c)
TESTDIR="$1"
RED='\033[1;31m'
GREEN='\033[1;32m'
NC='\033[0m'
TC="${TESTDIR}*.c"
for i in ${TC} ; do
    if [[ "$i" != *"_driver.c" ]];then
    echo ${i}
    DIRNAME=$(dirname "${i}")
    BASENAME=$(basename "${i}" .c)
    #echo "compiling.."
    bin/c_compiler -S ${i} -o foo.s
    #echo "making obj"
    mips-linux-gnu-gcc -mfp32 -o foo.o -c foo.s 
    #echo "linking..."
    mips-linux-gnu-gcc -mfp32 -static -o foo foo.o "${DIRNAME}/${BASENAME}_driver.c"
    #echo "simulating..."
    qemu-mips foo
    if [[ $? == 0 ]]; then
    echo -e "${GREEN}PASS${NC}"
    else
    echo -e "${RED}FAIL${NC}"
    fi
    
    fi
done