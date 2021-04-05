#!/bin/sh
gcc *.c -o ex03_t -Wall -Wextra -Werror;
./ex03_t > result_teste;
diff compare_teste result_teste > teste.diff;