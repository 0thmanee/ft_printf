/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouchta <obouchta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:27:43 by aichmawi          #+#    #+#             */
/*   Updated: 2023/11/14 10:44:10 by obouchta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
void	printc(char c, int *count);
void	printd(int d, int *count);
void	prints(const char *str, int *count);
void	printx(unsigned int n, int *count, char c);
void	printu(unsigned int n, int *count);
#endif
