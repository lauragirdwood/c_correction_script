#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main()
{
	printf("%d\n", strncmp("abc", "ABC", 1));
	printf("%d\n", ft_strncmp("abc", "ABC", 1));
	printf("%d\n", strncmp("abc", "aBc", 1));
	printf("%d\n", ft_strncmp("abc", "aBc", 1));
	printf("%d\n", strncmp("abc", "aBc", 2));
	printf("%d\n", ft_strncmp("abc", "aBc", 2));
	printf("%d\n", strncmp("abc", "aBc", 3));
	printf("%d\n", ft_strncmp("abc", "aBc", 3));
	printf("%d\n", strncmp("ABC", "abc", 1));
	printf("%d\n", ft_strncmp("ABC", "abc", 1));
	return (0);
}