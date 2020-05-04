#!/bin/bash
gcc -fPIC -c 3-sub.c 3-add.c 3-mul.c 3-div.c 3-mod.c
gcc -shared -o 100-operations.so 3-sub.o 3-add.o 3-mul.o 3-div.o 3-mod.o
