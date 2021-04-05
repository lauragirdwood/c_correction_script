#!/bin/sh
gcc *.c -o ex01_t -Wall -Wextra -Werror;
./ex01_t > result_teste;
diff compare_teste result_teste > teste.diff;