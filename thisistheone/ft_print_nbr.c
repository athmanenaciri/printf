/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 01:03:34 by anaciri           #+#    #+#             */
/*   Updated: 2021/12/15 15:01:29 by anaciri          ###   ########.fr       */
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
		num /= 10;
		i++;
	}
	return (i);
}

int	ft_print_nbr(int nb)
{
	long	nbr;

	nbr = nb;
	if (nbr < 0)
	{
		nbr = -nbr;
		ft_print_char('-');
	}
	if (nbr < 10)
	{
		ft_print_char(nbr + '0');
	}
	else
	{
		ft_print_nbr(nbr / 10);
		ft_print_nbr(nbr % 10);
	}
	return(nbr_size(nbr));
}
int main()
{
	int j;
	j = 12;
	j = ft_print_nbr(j);
	printf("\n%d", j);
}
