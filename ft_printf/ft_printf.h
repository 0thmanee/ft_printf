/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouchta <obouchta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 20:03:41 by obouchta          #+#    #+#             */
/*   Updated: 2023/11/14 10:59:59 by obouchta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <stdarg.h>

int		ft_printf(char	*str, ...);
int		ft_format(va_list args, char c);
int		ft_printc(char c);
int		ft_prints(char *s);
int		ft_printd(int d);
char	*ft_itoa(int n);

#endif
