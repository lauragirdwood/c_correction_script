#!/bin/sh
gcc *.c -o ex08_t -Wall -Wextra -Werror;
./ex08_t > result_teste;
diff compare_teste result_teste > teste.diff;