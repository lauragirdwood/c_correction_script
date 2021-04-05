#include <stdio.h>
#include <string.h>

int	ft_str_is_printable(char *str);

int main()
{
	printf("%d\n", ft_str_is_printable("a"));
	printf("%d\n", ft_str_is_printable("\n"));
	printf("%d\n", ft_str_is_printable("\a"));
	printf("%d\n", ft_str_is_printable("\t"));
	printf("%d\n", ft_str_is_printable(""));
	return (0);
}