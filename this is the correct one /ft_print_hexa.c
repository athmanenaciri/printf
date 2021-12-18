/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 18:51:54 by anaciri           #+#    #+#             */
/*   Updated: 2021/12/18 17:48:36 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"
int ft_nbr_size_hexa( unsigned long long nbr)
{
	int i;
	i = 0;
	if (nbr == 0)
		return(1);
	while (nbr)
	{
		nbr /= 16;
		i++;
	}
	return (i);
}

int ft_print_hexa(unsigned long long nbr, char xorX)
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
	return(ft_nbr_size_hexa(nbr));
}
//int main()
//{
//	int digit;
//
//	digit = 123;
//	printf("\n%d", ft_print_hexa(digit, 'X'));
//}
