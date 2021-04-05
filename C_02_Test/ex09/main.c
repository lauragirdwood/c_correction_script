#include <stdio.h>
#include <string.h>

char *ft_strcapitalize(char *str);

int main()
{
	char str[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	printf("%s\n", ft_strcapitalize(str));
	return (0);
}