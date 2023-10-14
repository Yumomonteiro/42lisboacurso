/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_words.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yude-oli <yude-oli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:30:59 by yude-oli          #+#    #+#             */
/*   Updated: 2023/10/13 11:34:51 by yude-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/ft_printf.h"

void	ft_putchar_len(char character, int *len)
{
	write(1, &character, 1);
	(*len)++;
}

void	ft_string(char *args, int *len)
{
	size_t	i;
	
	i = 0;
	if(!args)
	{
		write(1, "(NULL)", 6);
		(*len) += 6;
		return ;
	}
	while(args[i] != '\0')
	{
		ft_putchar_len(args[i], len);
		i++;
	}
}