#include "main.h"

/**
 * _print_revstr - Print a reversed string
 * @str: The string to reverse and print
 * Return: The number of characters printed
 */
int _print_revstr(char *str, const char *format)
{
	int i;
	int count;
	int length;

	count = 0;
	length = 0;
	if (str == NULL)
		return (_print_str("(null)"));
	else if (str[0] == '\0')
		return (_print_str((char *)format));
	while (str[length])
		length++;
	i = length - 1;
	while (i >= 0)
	{
		_print_char(str[i]);
		count++;
		i--;
	}
	return (count);
}
