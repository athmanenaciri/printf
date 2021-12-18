/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 14:35:34 by anaciri           #+#    #+#             */
/*   Updated: 2021/12/18 20:44:02 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int	ft_print_char(char c);
int	ft_print_nbr(int nb);
int	ft_print_str(char *str);
int	ft_print_addr(unsigned long long nb);
int	ft_print_hexa(unsigned long long nbr, char xorX);
int	ft_print_unbr(unsigned int nbr);
int	ft_putexp(char sp, va_list args);
int	ft_printf(const char *format, ...);

#endif
