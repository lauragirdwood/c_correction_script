#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);

int main()
{
	char str1[80] = "1234567890";
	char str2[80] = "1234567890";
	printf("%s\n", strstr(str1, "0"));
	printf("%s\n", ft_strstr(str2, "0"));
	printf("%s\n", strstr(str1, "456"));
	printf("%s\n", ft_strstr(str2, "456"));
	printf("%s\n", strstr(str1, "abc"));
	printf("%s\n", ft_strstr(str2, "abc"));
	printf("%s\n", strstr(str1, "457"));
	printf("%s\n", ft_strstr(str2, "457"));
	return (0);
}