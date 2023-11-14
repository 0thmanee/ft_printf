#include "ft_printf.h"

static size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

static char	*ft_strdup(const char *str)
{
	char	*dest;
	size_t	srclen;
	size_t	i;

	srclen = ft_strlen(str);
	dest = (char *)malloc(srclen + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static char	*min_or_0(int n)
{
	if (n == 0)
		return (ft_strdup("0"));
	return (ft_strdup("-2147483648"));
}

static int	calc_digits(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count++;
		n *= -1;
	}
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*nbr;
	int		len;

	if (n == 0 || n == -2147483648)
		return (min_or_0(n));
	len = calc_digits(n);
	nbr = (char *)malloc(len + 1);
	if (!nbr)
		return (NULL);
	nbr[0] = '+';
	if (n < 0)
	{
		nbr[0] = '-';
		n *= -1;
	}
	nbr[len] = '\0';
	while (--len >= 0)
	{
		if (len == 0 && nbr[len] == '-')
			break ;
		nbr[len] = (n % 10) + 48;
		n /= 10;
	}
	return (nbr);
}
