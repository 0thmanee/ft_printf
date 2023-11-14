int main()
{
	char c = 'd';
	char *str = "Hello";
	printf(" %d \n", ft_printf("%c, %s", c, str));
	printf(" %d ", printf("%c, %s", c, str));
}