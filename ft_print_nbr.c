/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 16:59:41 by anaciri           #+#    #+#             */
/*   Updated: 2021/12/18 20:36:11 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_count_nbr(int nbr)
{
	int	i;

	i = 0;
	if (nbr == 0)
		return (1);
	while (nbr)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

int	ft_print_nbr(int nb)
{
	long	nbr;
	int		is_negative;

	is_negative = 0;
	nbr = nb;
	if (nbr < 0)
	{
		nbr = -nbr;
		ft_print_char('-');
		is_negative = 1;
	}
	if (nbr < 10)
		ft_print_char(nbr + '0');
	else
	{
		ft_print_nbr(nbr / 10);
		ft_print_nbr(nbr % 10);
	}
	return (ft_count_nbr(nbr) + is_negative);
}
