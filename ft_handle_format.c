/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_format.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaidah <azaidah@student.24amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 13:11:25 by azaidah           #+#    #+#             */
/*   Updated: 2026/10/19 13:11:39 by azaidah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_handle_format(char format, va_list args)
{
    int len;

    len = 0;
    if (format == 'c')
        len += ft_putchar_len(va_arg(args, int));
    else if (format == 's')
        len += ft_putstr_len(va_arg(args, char *));
    else if (format == 'p')
        len += ft_putptr_len(va_arg(args, unsigned long), "0123456789abcdef");
    else if (format == 'd' || format == 'i')
        len += ft_putnbr_len(va_arg(args, int));
    else if (format == 'u')
        len += ft_putunbr(va_arg(args, unsigned int));
    else if (format == 'x')
        len += ft_puthex_len(va_arg(args, unsigned int), "0123456789abcdef");
    else if (format == 'X')
        len += ft_puthex_len(va_arg(args, unsigned int), "0123456789ABCDEF");
    else if (format == '%')
        len += ft_putchar_len('%');
    return (len);
}