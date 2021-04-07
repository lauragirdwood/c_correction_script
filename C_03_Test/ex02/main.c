#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);

int main()
{
	char str1[80] = "123";
	char str2[80] = "123";
	strcat(str1, "456");
	printf("%s\n", str1);
	ft_strcat(str2, "456");
	printf("%s\n", str2);
	strcat(str1, "aBc");
	printf("%s\n", str1);
	ft_strcat(str2, "aBc");
	printf("%s\n", str2);
	strcat(str1, "abc");
	printf("%s\n", str1);
	ft_strcat(str2, "abc");
	printf("%s\n", str2);
	return (0);
}