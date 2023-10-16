#include "main.h"

/**
 * ft_print_addr - Print an address in hexadecimal format
 * @nb: The address to print
 * This function prints an address in hexadecimal format with a '0x' prefix
 * to the standard output.
 * Return: The total number of characters printed.
 */
int	ft_print_addr(unsigned long nb)
{
	write(1, "0x", 2);
	return (_print_hexa(nb, 'x') + 2);
}
