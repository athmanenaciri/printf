#include "main.h"

int	_nbr_size_hexa( unsigned long nbr)
{
	int	i;

	i = 0;
	if (nbr == 0)
		return (1);
	while (nbr)
	{
		nbr /= 16;
		i++;
	}
	return (i);
}

int	_print_hexa(unsigned long nbr, char xorX)
{
	char	*str;

	if (xorX == 'x')
		str = "0123456789abcdef";
	else if (xorX == 'X')
		str = "0123456789ABCDEF";
	if (nbr < 16)
		_print_char(str[nbr]);
	else
	{
		_print_hexa(nbr / 16, xorX);
		_print_hexa(nbr % 16, xorX);
	}
	return (_nbr_size_hexa(nbr));
}
