#include "main.h"

/**
 * print_non_printable - Print a string with non-printable characters in hexadecimal
 * @str: The input string
 *
 * This function prints a string to the standard output, representing non-printable
 * characters in hexadecimal format, and print the printable characters as is.
 */
int print_non_printable(char *str)
{
	int i;
	int count;
	int hex_size;
	unsigned long hex_value;

	count = 0;
	i = 0;
	while(str[i])
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			hex_value = (unsigned char)str[i];
			hex_size = _print_hexa(hex_value, 'X');
			count += hex_size;
		}
		else
		{
			_print_char(str[i]);
			count++;
		}
		i++;
	}
	return (count);
}
