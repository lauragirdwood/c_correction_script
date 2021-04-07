#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int main()
{
	char *str1 = "a";
	char *str2 = "A";
	char *str3 = "A";
	char *str4 = "a";
	char *str5 = "b";
	char *str6 = "a";
	char *str7 = "a";
	char *str8 = "b";

	printf("%d\n", strcmp("a", "A"));
	printf("%d\n", strcmp("A", "a"));
	printf("----------------------------\n");
	printf("%d\n", strcmp(str1, str2));
	printf("%d\n", strcmp(str3, str4));
	printf("----------------------------\n");
	printf("%d\n", strcmp(str5, str6));
	printf("%d\n", strcmp(str7, str8));
	return (0);
}