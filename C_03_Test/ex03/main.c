#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main()
{
	char str1[80] = "123";
	char str2[80] = "123";
	strncat(str1, "456", 2);
	printf("%s\n", str1);
	ft_strncat(str2, "456", 2);
	printf("%s\n", str2);
	strncat(str1, "aBc", 3);
	printf("%s\n", str1);
	ft_strncat(str2, "aBc", 3);
	printf("%s\n", str2);
	strncat(str1, "abc", 1);
	printf("%s\n", str1);
	ft_strncat(str2, "abc", 1);
	printf("%s\n", str2);
	return (0);
}