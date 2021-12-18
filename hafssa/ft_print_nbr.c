/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 16:59:41 by anaciri           #+#    #+#             */
/*   Updated: 2021/12/18 03:26:13 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_print_nbr(int nb)
{ 
	long nbr;
	nbr = nb;
	if (nbr < 0)
	{
		nbr = -nbr;
		ft_print_nbr('-');
	}
	else if (nbr < 10)
		ft_print_char(nbr + '0');
	else
	{
		ft_print_nbr(nbr / 10);
		ft_print_nbr(nbr % 10);
	}
	return(ft_nbr_size(nbr));
}
//int main()
//{
//	int num;
//	int j;
//	num = 1246;
//	j = ft_print_nbr(num);
//	printf("\n%d", j);
//}
