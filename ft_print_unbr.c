/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 23:25:11 by anaciri           #+#    #+#             */
/*   Updated: 2021/12/18 20:38:18 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_count_unbr(unsigned int nbr)
{
	int	i;

	i = 0;
	if (nbr == 0)
		return (1);
	while (nbr)
	{
		nbr /= 10;
		i ++;
	}
	return (i);
}

int	ft_print_unbr(unsigned int nbr)
{
	if (nbr < 10)
	{
		ft_print_char(nbr + '0');
	}
	else
	{
		ft_print_unbr(nbr / 10);
		ft_print_unbr(nbr % 10);
	}
	return (ft_count_unbr(nbr));
}
