#include "main.h"

/**
 * _print_rot13 - Rot13 encode a string
 * @str: The string to be encoded
 * Return: The number of characters printed
 */
int _print_rot13(char *str)
{
	int i;
	int j;
	char *input;
	char *output;

	input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	i = 0;
	while (str[i])
	{
		j = 0;
		while (input[j])
		{
			if (str[i] == input[j])
			{
				str[i] = output[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (_print_str(str));
}
