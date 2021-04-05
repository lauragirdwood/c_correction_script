#!/bin/sh
gcc *.c -o ex06_t -Wall -Wextra -Werror;
./ex06_t > result_teste;
diff compare_teste result_teste > teste.diff;