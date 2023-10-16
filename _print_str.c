#include "main.h"

/**
 * ft_print_str - Print a string to standard output
 * @str: The string to print
 * Return: The number of characters printed
 */
int	_print_str(char *str)
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
