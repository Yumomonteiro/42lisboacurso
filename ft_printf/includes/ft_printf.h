/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yude-oli <yude-oli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 10:35:52 by yude-oli          #+#    #+#             */
/*   Updated: 2023/10/14 11:15:59 by yude-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>

static int  ft_printf_checker(char s, va_list *args, int *len, int *i);

void	    ft_putchar_len(char character, int *len);

void	    ft_string(char *args, int *len);

int	        ft_printf(const char *string, ...);

void	    ft_intnumber(int nbr, int *len);

void	    ft_hexa_in_lower_or_upper(unsigned int x, int *len, char deftype_x);

void	    ft_unsigned_int(unsigned int u, int *len);

void	    ft_pointer(size_t pointer, int *len);

#endif