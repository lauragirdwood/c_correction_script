#include <stdio.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main()
{
	char tst1[] = "abcdef";
	char tst2[] = "abcdef";
	strncpy(tst1, "123", 3);
		printf("%s\n", tst1);
	ft_strncpy(tst2, "123", 3);
		printf("%s\n", tst2);
	strncpy(tst1, "abc", 2);
		printf("%s\n", tst1);
	ft_strncpy(tst2, "abc", 2);
		printf("%s\n", tst2);
	strncpy(tst1, "123", 0);
		printf("%s\n", tst1);
	ft_strncpy(tst2, "123", 0);
		printf("%s\n", tst2);
	strncpy(tst1, "123", 4);
		printf("%s\n", tst1);
	ft_strncpy(tst2, "123", 4);
		printf("%s\n", tst2);
	return (0);
}