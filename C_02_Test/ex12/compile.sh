#!/bin/sh
gcc *.c -o ex11_t -Wall -Wextra -Werror;
./ex11_t > result_teste;
diff compare_teste result_teste > teste.diff;