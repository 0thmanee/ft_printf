#include "ft_printf.h"

int main()
{
	char c = 'd';
	char *str = "Hello";
	int x = 3411124;
	printf(" %d \n", ft_printf("%d",x));
	printf(" %d ", printf("%d",x));
}