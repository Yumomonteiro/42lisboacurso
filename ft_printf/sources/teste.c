/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yude-oli <yude-oli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 11:40:12 by yude-oli          #+#    #+#             */
/*   Updated: 2023/10/14 11:24:48 by yude-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
char ft_writestr(char *str);
int intnbr(int  n);
char chr(char c);
unsigned int nbr(int nbrn);
int Value = 42;
void *ptr = &Value;

int main()
{
    char chr = 'A';
    int n = 10;
    char str[] = "hello";
    unsigned int nbr = 123;
    printf("%s\n %d \n %c\n %x\n %X\n %u\n %%\n %p\n", str, n, chr, nbr, nbr, nbr, nbr, ptr);
    ft_printf("%s\n %d \n %c\n %x\n %X\n %u\n %%\n %p\n", str, n, chr, nbr, nbr, nbr, nbr, ptr);
    
    return 0;
}
