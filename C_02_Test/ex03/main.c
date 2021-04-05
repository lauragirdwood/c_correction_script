#include <stdio.h>
#include <string.h>

int ft_str_is_numeric(char *str);

int main()
{
	printf("%d\n", ft_str_is_numeric("abc"));
	printf("%d\n", ft_str_is_numeric("0123"));
	printf("%d\n", ft_str_is_numeric("abc2"));
	printf("%d\n", ft_str_is_numeric("ab!a"));
	printf("%d\n", ft_str_is_numeric(""));
	printf("%d\n", ft_str_is_numeric(" "));
	return (0);
}