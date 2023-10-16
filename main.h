#ifndef MAIN_H
#define MAIN_H
# include <stdarg.h>
# include <unistd.h>

int _printf(const char *format, ...);
int	_print_char(char c);
int	_print_nbr(int nb);
int	_print_str(char *str);
int _print_binary(unsigned int nb);
int	_print_hexa(unsigned long nbr, char xorX);
int	_print_unbr(unsigned int nbr);
int _print_octal(unsigned int nbr);
int _print_n_p(char *str);
int ft_print_addr(unsigned long nb);

#endif
