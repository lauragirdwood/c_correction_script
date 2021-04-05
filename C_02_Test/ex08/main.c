#include <stdio.h>
#include <string.h>

char *ft_strlowcase(char *str);

int main()
{
	char str1[20] = "AaAAaAAaaAAaa";
	char str2[20] = "AbCdEfGh";
	char str3[20] = "aaaaa";
	char str4[20] = "abcd";
	char str5[25] = "ca68ac6ac4ac857aca86c4";
	char str6[20] = "@!!!!dsadaqwdwaf!1";
	char str7[20] = "!!&f*¨@@¨@&$**!1";
	printf("%s\n", ft_strlowcase(str1));
	printf("%s\n", ft_strlowcase(str2));
	printf("%s\n", ft_strlowcase(str3));
	printf("%s\n", ft_strlowcase(str4));
	printf("%s\n", ft_strlowcase(str5));
	printf("%s\n", ft_strlowcase(str6));
	printf("%s\n", ft_strlowcase(str7));
	return (0);
}