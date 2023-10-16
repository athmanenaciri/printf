#include "main.h"

/**
 * _print_binary - Print an unsigned integer in binary format
 * @nb: The unsigned integer to print
 * Return: The total number of characters printed
 */
int _print_binary(unsigned int nb)
{
	int i;
	int count;
	char	binary[64];

	count = 0;
	if (nb == 0)
	{
		_print_char('0');
		return (1);
	}
	while (nb > 0)
	{
		binary[count++] = nb % 2 + '0';
		nb /= 2;
	}
	i = count - 1;
	while(i >= 0)
	{
		_print_char(binary[i]);
		i--;
	}
	return (count);
}
