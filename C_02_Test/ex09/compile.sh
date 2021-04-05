#!/bin/sh
gcc *.c -o ex09_t -Wall -Wextra -Werror;
./ex09_t > result_teste;
diff compare_teste result_teste > teste.diff;