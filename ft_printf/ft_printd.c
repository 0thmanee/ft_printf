/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouchta <obouchta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 22:37:49 by obouchta          #+#    #+#             */
/*   Updated: 2023/11/13 22:57:42 by obouchta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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

int	ft_printd(int d)
{
	int		bytes;
	int		j;
	int		len;

	if (d == 0)
		j = ft_printc('0');
	else if (d == -2147483648) 
		j = ft_prints("-2147483648");
	else
	{	
		len = calc_digits(d);
		if (d < 0)
			j = ft_printc('-');
		while (--len >= 0)
		{
			ft_printc((d % 10) + 48);
			d /= 10;
		}
	}
	return (bytes);
}

