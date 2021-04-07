#!/bin/sh
gcc *.c -o ex10_t -Wall -Wextra -Werror -lbsd;
./ex10_t > result_teste;
diff compare_teste result_teste > teste.diff;