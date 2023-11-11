#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c -fPIC *.c
gcc *.o -shared -o liball.so
export LD_LIBRARY_PATH=.:LD_LIBRARY_PATH
