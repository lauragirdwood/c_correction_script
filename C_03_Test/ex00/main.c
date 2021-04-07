#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int main()
{
	printf("%d\n", strcmp("abc", "ABC"));
	printf("%d\n", ft_strcmp("abc", "ABC"));
	printf("%d\n", strcmp("abc", "abc"));
	printf("%d\n", ft_strcmp("abc", "abc"));
	printf("%d\n", strcmp("ABC", "abc"));
	printf("%d\n", ft_strcmp("ABC", "abc"));
	return (0);
}