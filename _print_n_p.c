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

	i = 0;
	count = 0;
	while (str[i])
	{
		if ((str[i] < 32 && str[i] >= 0) || str[i] >= 127)
		{
			_print_char('\\');
			_print_char('x');
			if (str[i] < 16)
				_print_char('0');
			_print_hexa(str[i], 'X');
			count += 4;
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

