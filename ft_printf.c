/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaidah <azaidah@student.24amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 13:09:00 by azaidah           #+#    #+#             */
/*   Updated: 2026/10/19 13:38:28 by azaidah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
    va_list args;
    int len;

    len = 0;
    va_start(args, format);
    while (*format)
    {
        if (*format == '%')
        {
            format++;
            len += ft_handle_format(*format, args);
        }
        else
        {
            ft_putchar(*format);
            len++;
        }
        format++;
    }
    va_end(args);
    return (len);
}