#!/bin/sh
gcc *.c -o ex02_t -Wall -Wextra -Werror;
./ex02_t > result_teste;
diff compare_teste result_teste > teste.diff;