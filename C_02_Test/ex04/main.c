#include <stdio.h>
#include <string.h>

int ft_str_is_lowercase(char *str);

int main()
{
	printf("%d\n", ft_str_is_lowercase("abc"));
	printf("%d\n", ft_str_is_lowercase("0123"));
	printf("%d\n", ft_str_is_lowercase("aAabc"));
	printf("%d\n", ft_str_is_lowercase("ab!a"));
	printf("%d\n", ft_str_is_lowercase(""));
	printf("%d\n", ft_str_is_lowercase(" "));
	return (0);
}