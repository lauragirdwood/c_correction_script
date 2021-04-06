#include <stdio.h>
#include <unistd.h>
#include <string.h>

void	*ft_print_memory(void *addr, unsigned int size, unsigned int index);

int main()
{
	char *teste = "Bonjour les aminches\t\n\tc  est fou\ttout\tce qu on peut faire avec\t\n\tprint_memory\n\n\n\tlol.lol\n ";
	ft_print_memory(teste, 92, 0);
	return (0);
}