/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouchta <obouchta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 22:37:49 by obouchta          #+#    #+#             */
/*   Updated: 2023/11/14 11:01:33 by obouchta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int	ft_printd(int d)
{
	int		bytes;
	int		j;

	bytes = 0;
	j = ft_prints(ft_itoa(d));
	if (j != -1)
		bytes += j;
	else
		return (-1);
	return (bytes);
}


