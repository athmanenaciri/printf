/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 16:36:01 by anaciri           #+#    #+#             */
/*   Updated: 2021/12/18 02:53:17 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int ft_print_str(char *str)
{
	int i;
	i = 0;

	if (str == 0)
		return write(1, "(null)", 6);
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return(i);
}
//int main()
//{
//	int l;
//	char *s = 0;
//	l = ft_print_str(s);
//	printf("\n%s", s);
//}
