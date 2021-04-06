#!/bin/sh
clear;
gcc *.c -o ex11_t -Wall -Wextra -Werror;
./ex11_t;
echo "-------------------------------------";
./ex11_t | cat -e;

echo "O endereço de memoria é diferente, então veja o arquivo .compare_teste para verificar a saida."