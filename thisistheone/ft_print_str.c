/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 00:22:23 by anaciri           #+#    #+#             */
/*   Updated: 2021/12/16 13:30:45 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"printf.h"

int	ft_print_str(char *str)
{
	int len;
	
	len = 0;
	if(str[len] == '\0')
		return (0);	
	while (str[len])
	{
		ft_print_char(str[len]);
		len++;
	}
	return(len);
}

