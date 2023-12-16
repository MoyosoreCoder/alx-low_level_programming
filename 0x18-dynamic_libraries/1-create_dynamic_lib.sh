#!/bin/bash

gcc -c -Wall -Wextra -Werror -pedantic -fPIC *.c
gcc -shared -o liball.so *.c
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
