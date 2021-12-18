/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 13:19:04 by anaciri           #+#    #+#             */
/*   Updated: 2021/12/17 14:26:41 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdarg.h>
#include <unistd.h>
int ft_putexp(char c, va_list args)
{
	if (c == 's')
		return(ft_print_str(va_arg(args, char *)));
	else if (c == 'd' || c == 'i')
		return(ft_print_nbr(va_arg(args, int)));
	else if (c == 'c')
		return(ft_print_char(va_arg(args, int)));
	else if (c == 'p')
		return(0);
	else if (c == 'x')
		return(ft_print_hexa(va_arg(args, int)));
	else if (c == 'X')
		return(ft_print_hexa(va_arg(args, int)));
	else if (c == 'u')
		return(ft_print_unbr(va_arg(args, int)));
}
int ft_printf(const char *format, ...)
{
	va_list	args;
	int i;
	i = 0;
	va_start(args, format);

	while(format[i])
	{
		if(format[i]  == '%')
		{
			i++;
			ft_putexp(format[i], args);
		}
		else
			write(1, &format[i], 1);
		i++;
	}
}
