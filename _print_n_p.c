#include "main.h"

/**
 * print_non_printable - Print a string with non-printable characters in hexadecimal
 * @str: The input string
 *
 * This function prints a string to the standard output, representing non-printable
 * characters in hexadecimal format, and print the printable characters as is.
 */
int _print_n_p(char *str)
{
	int i;
	int count;
	unsigned char c;

	i = 0;
	count = 0;
	while (str[i])
	{
		c = str[i];
		if ((c < 32 && c >= 0) || c >= 127)
		{
			_print_char('\\');
			_print_char('x');
			if (c < 16)
				_print_char('0');
			_print_hexa(c, 'X');
			count += 4;
		}
		else
		{
			_print_char(c);
			count++;
		}
		i++;
	}
	return (count);
}

