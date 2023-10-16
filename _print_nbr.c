#include "main.h"

/**
 * _count_nbr - Count the number of digits in an integer
 * @nbr: The integer to count digits in
 * Return: The number of digits in the integer
 */
int	_count_nbr(int nbr)
{
	int	i;

	i = 0;
	if (nbr == 0)
		return (1);
	while (nbr)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

/**
 * _print_nbr - Print an integer to standard output
 * @nb: The integer to print
 * Return: The total number of characters printed
 */
int	_print_nbr(int nb)
{
	long	nbr;
	int		is_negative;

	is_negative = 0;
	nbr = nb;
	if (nbr < 0)
	{
		nbr = -nbr;
		_print_char('-');
		is_negative = 1;
	}
	if (nbr < 10)
		_print_char(nbr + '0');
	else
	{
		_print_nbr(nbr / 10);
		_print_nbr(nbr % 10);
	}
	return (_count_nbr(nbr) + is_negative);
}
