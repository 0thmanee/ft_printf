/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prints.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouchta <obouchta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 22:37:54 by obouchta          #+#    #+#             */
/*   Updated: 2023/11/13 22:39:26 by obouchta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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