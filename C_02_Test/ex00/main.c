#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *dest, char *src);

int main()
{
	char tst1[3] = "abc";
	char tst2[3] = "123";
	ft_strcpy(tst1, "12345678901234");
	printf("%s\n", tst1);
	ft_strcpy(tst2, "abcdefghijklmn");
	printf("%s\n", tst2);
	return (0);
}