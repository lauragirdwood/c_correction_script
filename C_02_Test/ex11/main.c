#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

void ft_putstr_non_printable(char *str);

int main()
{
	ft_putstr_non_printable("Oi\nvoce esta bem?");
	printf("\n");
	return (0);
}