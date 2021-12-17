/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_adr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 16:09:57 by anaciri           #+#    #+#             */
/*   Updated: 2021/12/16 13:31:36 by anaciri          ###   ########.fr       */
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
int	ft_print_adr(unsigned long nb)
{

    char *str;

	str = "0123456789abcdef";
	if (nb < 16)
		ft_print_char(str[nb]);
	else
	{
		ft_print_adr(nb / 16);
		ft_print_adr(nb % 16);
	}
	return(nbr_size(nb));
}
