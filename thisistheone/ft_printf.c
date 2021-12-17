/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 19:27:48 by anaciri           #+#    #+#             */
/*   Updated: 2021/12/15 15:04:24 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_printf(char *format, ...)
{
    int i;

    i = 0;
    int counter = 0;
    while (format[i])
    {
        if (format[i] == '%')
        {
            i++;
            if (format[i] == 's')
                counter += ft_print_str();
            else if (format[i] == 'c')
                ft_print_char();
            else if (format[i] == 'd' || format[i] == 'i')
                ft_print_nbr();
            else if (format[i] == '%')
                ft_print_char('%');
        }
    }
}
