/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaidah <azaidah@student.24amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 12:33:02 by azaidah           #+#    #+#             */
/*   Updated: 2026/10/19 12:33:37 by azaidah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_len(int n)
{
    int len;

    len = 0;
    if (n == -2147483648)
    {
        ft_putstr("-2147483648");
        return (11);
    }
    if (n < 0)
    {
        ft_putchar('-');
        n = -n;
        len++;
    }
    if (n >= 10)
        len += ft_putnbr_len(n / 10);
    ft_putchar(n % 10 + '0');
    len++;
    return (len);
}