/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 18:51:54 by anaciri           #+#    #+#             */
/*   Updated: 2021/12/17 10:28:26 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"printf.h"
#include<stdio.h>

int	ft_nbr_size(int nbr)
{
	int i;
	i = 0;
	while (nbr)
	{
		nbr /= 16;
		i++;
	}
	return(i);
}
int ft_print_hexa(unsigned int nbr, char xorX)
{
	char *str;
	if (xorX == 'x')
		str = "0123456789abcdef";
	else if (xorX == 'X')
		str = "0123456789ABCDEF";
	if (nbr < 16)
		ft_print_char(str[nbr]);
	else
	{
		ft_print_hexa(nbr / 16, xorX);
		ft_print_hexa(nbr % 16, xorX);
	}
	return(ft_nbr_size(nbr));
}
int main()
{
	int digit;

	digit = 123;
	printf("\n%d", ft_print_hexa(digit, 'X'));
}
