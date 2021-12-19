/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 13:19:04 by anaciri           #+#    #+#             */
/*   Updated: 2021/12/19 17:30:41 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" 

int	ft_putexp(char sp, va_list args)
{	
	if (sp == 'c')
		return (ft_print_char(va_arg(args, int)));
	if (sp == 's')
		return (ft_print_str(va_arg(args, char *)));
	else if (sp == 'd' || sp == 'i')
		return (ft_print_nbr(va_arg(args, int)));
	else if (sp == 'x' || sp == 'X')
		return (ft_print_hexa(va_arg(args, unsigned int), sp));
	else if (sp == 'u')
		return (ft_print_unbr(va_arg(args, unsigned int)));
	else if (sp == 'p')
		return (ft_print_addr(va_arg(args, unsigned long long)));
	else
		return (write(1, &sp, 1));
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		counter;

	i = 0;
	counter = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 0)
				break ;
			counter += ft_putexp(format[i], args);
		}
		else
			counter += write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (counter);
}
