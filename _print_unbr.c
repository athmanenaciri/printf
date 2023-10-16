#include "main.h"

/**
 * _count_unbr - Count the number of digits in an unsigned integer
 * This function counts the number of digits in an unsigned integer.
 * Return: The number of digits in the integer.
 */
int	_count_unbr(unsigned int nbr)
{
	int	i;

	i = 0;
	if (nbr == 0)
		return (1);
	while (nbr)
	{
		nbr /= 10;
		i ++;
	}
	return (i);
}

/**
 * _print_unbr - Print an unsigned integer to standard output
 * This function prints an unsigned integer to the standard output.
 * Return: The total number of characters printed.
 */
int	_print_unbr(unsigned int nbr)
{
	if (nbr < 10)
	{
		_print_char(nbr + '0');
	}
	else
	{
		_print_unbr(nbr / 10);
		_print_unbr(nbr % 10);
	}
	return (_count_unbr(nbr));
}
