#include "ft_printf.h"

int main()
{
	char c = 'd';
	char *str = "Hello";
	int x = -2147483647;
	printf(" %d \n", ft_printf("0diqsfei%wvb%p",&x));
	printf(" %d ", printf("0diqsfei%wvb%p",&x));
}