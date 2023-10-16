#include "main.h"

/**
 * _print_octal - Print an unsigned integer in octal format
 *
 * This function prints an unsigned integer in octal format to the standard output.
 *
 * Return: The total number of characters printed.
 */
int _print_octal(unsigned int nbr)
{
	char octal[23];
	int	i;
	int lenght;

	i = 0;
	lenght = 0;
	if (nbr == 0)
	{
		_print_char('0');
		return (1);
	}
	while (nbr > 0)
	{
		octal[i] = (nbr % 8) + '0';
		nbr /= 8;
		i++;
	}
	lenght = i;
	while (i > 0)
	{
		i--;
		_print_char(octal[i]);
	}
	return (lenght);
}
