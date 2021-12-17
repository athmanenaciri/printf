/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:26:53 by anaciri           #+#    #+#             */
/*   Updated: 2021/12/17 15:15:46 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>


int count_hex(unsigned long long nb)
{
	int count;

	count = 0;
	while (nb)
	{
		nb /= 16;
		count++;
	}
	return (count);
}

int ft_puthex(unsigned long long nb, char sp)
{
	char *hex;

	if (sp == 'x')
		hex = "0123456789abcdef";
	else
		hex = "0123456789ABCDEF";

	if (nb < 16)
	{
		write(1, &hex[nb], 1);
	}
	else
	{
		ft_puthex(nb / 16);
		ft_puthex(nb % 16);
	}
	return count_hex(nb);
}


int ft_putaddr(unsigned long long nb)
{
	write(1, "0x", 2);
	return ft_puthex(nb, 'x') + 2;
}

int putexp(char sp, va_list args)
{
	if (sp == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (sp == 'd' || sp == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (sp == 'x' || sp == 'X')
		return (ft_puthex(va_arg(args, unsigned int, sp)));
	else if (sp == 'u')
		return (ft_putunbr(va_arg(args, unsigned int, sp)));
	else if (sp == 'p')
		return (ft_putaddr(va_arg(args, unsigned long long, sp)));
	else
		return write(1, &sp, 1);
}


int	ft_printf(const char *format, ...)
{
	int i;
	va_list args;

	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			putexp(format[i], args);
		}
		else
			write(1, &format[i], 1);
		i++;
	}
	return 0;
}
int main()
{
	ft_printf("athmane %s %d", "abc", 97 );
}
