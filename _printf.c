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
	if (sp == 's')
		return (_print_str(va_arg(args, char *)));
	else if (sp == 'd' || sp == 'i')
		return (_print_nbr(va_arg(args, int)));
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
			counter += _putexpression(format[i], args);
		}
		else
			counter += write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (counter);
}
