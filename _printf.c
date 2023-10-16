#include "main.h"

/**
 * ft_print_char - Print a character to standard output
 * @c: The character to print
 * Return: The number of characters printed (always 1)
 */
int	ft_print_char(char c)
{
	write(1, &c, 1);
	return (1);
}

/**
 * ft_print_str - Print a string to standard output
 * @str: The string to print
 * Return: The number of characters printed
 */
int	ft_print_str(char *str)
{
	int	i;

	i = 0;
	if (str == 0)
		return (write(1, "(null)", 6));
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

/**
 * ft_putexp - Handle various format specifiers and print the corresponding data
 * @sp: The format specifier character
 * @args: The va_list of arguments
 * Return: The number of characters printed
 */
int	ft_putexp(char sp, va_list args)
{	
	if (sp == 'c')
		return (ft_print_char(va_arg(args, int)));
	if (sp == 's')
		return (ft_print_str(va_arg(args, char *)));
	else
		return (write(1, &sp, 1));
}

/**
 * _printf - Custom printf function
 * @format: The format string
 * Return: The total number of characters printed
 */
int _printf(const char *format, ...)
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
