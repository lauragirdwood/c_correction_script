#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *dest, char *src);

int main()
{
	char tst1[3] = "123";
	char tst2[3] = "123";
	strcpy(tst2, "123456");
	printf("%s\n", tst2);
	ft_strcpy(tst1, "123456");
	printf("%s\n", tst1);
	strcpy(tst2, "abcdef");
	printf("%s\n", tst2);
	ft_strcpy(tst1, "abcdef");
	printf("%s\n", tst1);
	strcpy(tst2, "ABCDEF");
	printf("%s\n", tst2);
	ft_strcpy(tst1, "ABCDEF");
	printf("%s\n", tst1);
	strcpy(tst2, "!@$&*¨");
	printf("%s\n", tst2);
	ft_strcpy(tst1, "!@$&*¨");
	printf("%s\n", tst1);
	return (0);
}