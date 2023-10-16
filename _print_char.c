#include "main.h"

/**
 * ft_print_char - Print a character to standard output
 * @c: The character to print
 * Return: The number of characters printed (always 1)
 */
int	_print_char(char c)
{
	write(1, &c, 1);
	return (1);
}
