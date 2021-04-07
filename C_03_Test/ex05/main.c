#include <stdio.h>
#include <bsd/string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{
	char str1[80] = "abc";
	char str2[80] = "abc";
	
	strlcat(str1, "123", 7);
	printf("str1 - %s\n", str1);
	strlcat(str1, "abc", 10);
	printf("str1 - %s\n", str1);
	strlcat(str1, "zxy", 12);
	printf("str1 - %s\n", str1);

	ft_strlcat(str2, "123", 7);
	printf("str2 - %s\n", str2);
	printf("str2 - %s\n", str2);
	ft_strlcat(str2, "abc", 10);
	printf("str2 - %s\n", str2);
	ft_strlcat(str2, "zxy", 12);
	printf("str2 - %s\n", str2);

	return (0);
}