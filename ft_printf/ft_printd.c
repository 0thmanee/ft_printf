/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouchta <obouchta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 22:37:49 by obouchta          #+#    #+#             */
/*   Updated: 2023/11/13 23:33:44 by obouchta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	calc_digits(int n)
{
	int	count;

	count = 0;
	if (n < 0)
		n *= -1;
	else if (n == 0)
		count++;
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

	bytes = 0;
	if (d == -2147483648)
	{
		j = ft_prints("-2147483648");
		if (j != -1)
			bytes += j;
		else
			return (-1);
	}
	else
	{
		len = calc_digits(d);
		if (d < 0)
		{
			j = ft_printc('-');
			if (j != -1)
				bytes += j;
			else
				return (-1);
		}
		while (--len >= 0)
		{
			j = ft_printc((d % 10) + 48);
			if (j != -1)
				bytes += j;
			else
				return (-1);
			d /= 10;
		}
	}
	return (bytes);
}

