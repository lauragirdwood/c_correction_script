#include <stdio.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main()
{
	char tst1[] = "123456";
	char tst2[] = "abcdef";
	char tst3[] = "1b3d56";
	ft_strncpy(tst1, "abc", 2);
		printf("%s\n", tst1);
	ft_strncpy(tst2, "123", 3);
		printf("%s\n", tst2);
	ft_strncpy(tst3, "!@$", 4);
		printf("%s\n", tst3);
	return (0);
}