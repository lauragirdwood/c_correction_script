#!/bin/sh
gcc *.c -o ex05_t -Wall -Wextra -Werror;
./ex05_t > result_teste;
diff compare_teste result_teste > teste.diff;