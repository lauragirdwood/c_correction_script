#!/bin/sh
gcc *.c -o ex00_t -Wall -Wextra -Werror;
./ex00_t > result_teste;
diff compare_teste result_teste > teste.diff;