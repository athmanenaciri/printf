/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 15:17:48 by anaciri           #+#    #+#             */
/*   Updated: 2021/12/15 15:20:23 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include<stddef.h>
# include<stdlib.h>
# include<unistd.h>
#include<stdio.h>

int	ft_print_char(char c);
int	ft_print_str(char *str);
int	ft_print_nbr(int nb);
int	ft_print_adr(unsigned long nb);
int	ft_print_hexa(unsigned int nbr, char xX);

#endif 
