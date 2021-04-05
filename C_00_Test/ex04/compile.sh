#!/bin/sh
gcc *.c -o ex04_t -Wall -Wextra -Werror;
./ex04_t > result_teste;
diff compare_teste result_teste > teste.diff;