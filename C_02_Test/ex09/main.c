#include <stdio.h>
#include <string.h>

char *ft_strcapitalize(char *str);

int main()
{
	char str1[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	char str2[] = "oi, TuDo BeM? 42PaLaVrAs QuArEnTa-E-dUAs; cinquentA+e+uM";
	printf("%s\n", ft_strcapitalize(str1));
	printf("%s\n", ft_strcapitalize(str2));
	return (0);
}