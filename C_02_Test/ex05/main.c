#include <stdio.h>
#include <string.h>

int ft_str_is_uppercase(char *str);

int main()
{
	printf("%d\n", ft_str_is_uppercase("ABC"));
	printf("%d\n", ft_str_is_uppercase("ABCd"));
	printf("%d\n", ft_str_is_uppercase("0123"));
	printf("%d\n", ft_str_is_uppercase("aAabc"));
	printf("%d\n", ft_str_is_uppercase("ab!a"));
	printf("%d\n", ft_str_is_uppercase(""));
	printf("%d\n", ft_str_is_uppercase(" "));
	return (0);
}