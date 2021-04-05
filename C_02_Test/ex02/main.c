#include <stdio.h>
#include <string.h>

int	ft_str_is_alpha(char *str);

int main()
{
	printf("%d\n", ft_str_is_alpha("abc"));
	printf("%d\n", ft_str_is_alpha("0123"));
	printf("%d\n", ft_str_is_alpha("abc2"));
	printf("%d\n", ft_str_is_alpha("ab!a"));
	printf("%d\n", ft_str_is_alpha(""));
	printf("%d\n", ft_str_is_alpha(" "));
	return (0);
}