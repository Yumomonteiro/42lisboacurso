/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yude-oli <yude-oli@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 10:41:36 by yude-oli          #+#    #+#             */
/*   Updated: 2023/10/18 10:57:38 by yude-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void ft_printf_checker(char s, va_list *args, int *len, int i)
{
	if(s == 's')
		ft_string(va_arg(*args, char *), len);
	else if(s == 'd' || s == 'i')
		ft_intnumber(va_arg(*args, int), len);
	else if (s == 'c')
		ft_putchar_len(va_arg(*args, int), len);
	else if (s == 'p')
		ft_pointer(va_arg(*args, size_t), len); 
	else if (s == 'u')
		ft_unsigned_int(va_arg(*args, unsigned int), len);
	else if (s == 'x')
		ft_hexa_in_lower_or_upper(va_arg(*args, unsigned int), len, 'x');
	else if (s == 'X')
		ft_hexa_in_lower_or_upper(va_arg(*args, unsigned int), len, 'X');
	else if (s == '%')
		ft_putchar_len('%', len);
	else
		i--;
}

int	ft_printf(const char *string, ...)
{
	va_list	args;
	int	i;
	int	len;

	i = 0;
	len = 0;
	va_start(args, string);
	while (string[i] != '\0')
	{
		if(string[i] == '%')
		{
			i++;
			ft_printf_checker(string[i], &args, &len, i);
			i++;
		}
		else
		{
			ft_putchar_len((char)string[i], &len);
			i++;
		}
	}
	va_end(args);
	return (len);
}
/*
int main() {
    char chr = 'A';
    int n = 10;
    char str[] = "Hello, World!";
    unsigned int nbr = 123;
    void *ptr = &n;

    int len = ft_printf("test:\n"
                       "Character: %c\n"
                       "Integer: %d\n"
                       "String: %s\n"
                       "Hexadecimal (lowercase): %x\n"
                       "Hexadecimal (uppercase): %X\n"
                       "Unsigned Integer: %u\n"
                       "Pointer: %p\n",
                       chr, n, str, nbr, nbr, nbr, ptr);
    printf(" %d characters.\n", len);

    return 0;
}

*/