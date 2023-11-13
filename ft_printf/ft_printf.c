/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouchta <obouchta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 19:52:28 by obouchta          #+#    #+#             */
/*   Updated: 2023/11/13 22:30:47 by obouchta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printc(char c)
{
	return(write(1, &c, 1));
}

int	ft_prints(char *s)
{
	int	i;
	int	j;
	int	bytes;

	i = 0;
	j = 0;
	bytes = 0;
	while (s[i])
	{
		j = ft_printc(s[i]);
		if (j != -1)
			bytes += j;
		else
			return (-1);
		i++;
	}
	return (bytes);
}

int	ft_printd(int d)
{
	int	i;
	int	j;
	int	bytes;

	i = 0;
	j = 0;
	bytes = 0;

	
	return (bytes);
}

int	ft_format(va_list args, char c)
{
	int bytes;
	int	j;
	
	j = 0;
	bytes = 0;
	if (c == '%')
		ft_printc(c);
	else if (c == 'c')
		j = ft_printc(va_arg(args, int));
	else if (c == 's')
		j = ft_prints(va_arg(args, char*));
	else if (c == 'd')
		j = ft_printd(va_arg(args, int));
	if (j != -1)
		bytes += j;
	else
		return (-1);
	return (bytes);
}

int	ft_printf(char	*str, ...)
{
	va_list	args;
	int		i;
	int		j;
	int		bytes;
	
	va_start(args, str);
	i = 0;
	bytes = 0;
	while (str[i])
	{
		if (str[i] == '%')
			j = ft_format(args, str[++i]);
		else
			j = ft_printc(str[i]);
		if (j != -1)
			bytes += j;
		else
			return (-1);
		i++;
	}
	return (bytes);
}

int main()
{
	char c = 'd';
	char *str = "Hello";
	printf(" %d \n", ft_printf("%c, %s", c, str));
	printf(" %d ", printf("%c, %s", c, str));
}