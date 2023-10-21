#include "main.h"

/**
 * ft_putexp - Handle various format specifiers and print the corresponding data
 * @sp: The format specifier character
 * @args: The va_list of arguments
 * Return: The number of characters printed
 */
int	_putexpression(char sp, va_list args)
{
	if (sp == 'c')
		return (_print_char(va_arg(args, int)));
	else if (sp == 's')
		return (_print_str(va_arg(args, char *)));
	else if (sp == 'd' || sp == 'i')
		return (_print_nbr(va_arg(args, int)));
	else if (sp == 'b')
		return (_print_binary(va_arg(args, unsigned int)));
	else if (sp == 'x' || sp == 'X')
		return (_print_hexa(va_arg(args, unsigned int), sp));
	else if (sp == 'u')
		return (_print_unbr(va_arg(args, unsigned int)));
	else if (sp == 'o')
        return (_print_octal(va_arg(args, unsigned int)));
	else if (sp == 'S')
        return (_print_n_p(va_arg(args, char *)));
	else if (sp == 'p')
		return (_print_addr(va_arg(args, unsigned long)));
	else if (sp == 'R')
		return (_print_rot13(va_arg(args, char *)));
	// else if (sp == 'r')
	// 	return (_print_revstr(va_arg(args, char *)));
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
	if (format == NULL)
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			// if (format[i] == 'r' && va_arg(args, char *) == NULL)
			// 	write(1, "%r", 2);
			if (format[i] == 0)
				break ;
			else
				counter += _putexpression(format[i], args);
		}
		else
			counter += write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (counter);
}
