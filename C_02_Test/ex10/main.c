#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main()
{
	unsigned int size = 10;
	char dst[5] = "teste";
	char src[5] = "12345";
	printf("%u - ", ft_strlcpy(dst, src, size));
	printf("%s", dst);
	printf("\n");
	size = 20;
	printf("%u - ", ft_strlcpy(dst, src, size));
	printf("%s", dst);
	printf("\n");
	return (0);
}