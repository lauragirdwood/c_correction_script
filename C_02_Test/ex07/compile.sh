#!/bin/sh
gcc *.c -o ex07_t -Wall -Wextra -Werror;
./ex07_t > result_teste;
diff compare_teste result_teste > teste.diff;