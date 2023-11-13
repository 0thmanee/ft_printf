/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouchta <obouchta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 19:52:28 by obouchta          #+#    #+#             */
/*   Updated: 2023/11/13 20:15:11 by obouchta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putchar(char c)
{
	return(write(1, &c, 1));
}

int	ft_format()
{
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
		{
			ft_format(args, str);
		}
		else
		{
			i++;
			j = ft_putchar(str[i]);
			if(j != -1)
				bytes += j;
			else
			
		}
	}
}