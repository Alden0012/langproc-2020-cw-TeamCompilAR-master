#!/bin/bash
TESTFILE="$1"
DIRNAME=$(dirname "${TESTFILE}")
BASENAME=$(basename "${TESTFILE}" .c)
cat ${TESTFILE} | ./a.out > foo.s 
mips-linux-gnu-gcc -mfp32 -o foo.o -c foo.s 
mips-linux-gnu-gcc -mfp32 -static -o foo foo.o "${DIRNAME}/${BASENAME}_driver.c"
qemu-mips foo
echo $?