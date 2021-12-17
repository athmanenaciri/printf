/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 14:57:58 by anaciri           #+#    #+#             */
/*   Updated: 2021/12/16 19:44:41 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h" 
#include<stdio.h>

int	nbr_size(int num)
{	
	int	i;

	i = 0;
	while (num)
	{
		num /= 16;
		i++;
	}
	return (i);
}
int	ft_print_hexa(unsigned int nbr, char xX)
{
    char *str;
    if (xX == 'x')
        str = "0123456789abcdef";
    else if (xX == 'X')
        str = "0123456789ABCDEF";
	if (nbr < 16)
	{
		ft_print_char(str[nbr]);
	}
	else
	{
		ft_print_hexa(nbr / 16, xX);
		ft_print_hexa(nbr % 16, xX);
	}
	return(nbr_size(nbr));
}
int main()
{
    int n;
    n = ft_print_hexa(256,'x');
	
    printf("\n%x\n", 256);
    return(0);
}
