/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaidah <azaidah@student.24amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 12:36:11 by azaidah           #+#    #+#             */
/*   Updated: 2026/10/19 12:46:54 by azaidah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int    ft_puthex_len(unsigned int n, char *base)
{
    int len;

    len = 0;
    if (n >= 16)
        len += ft_puthex_len(n / 16, base);
    ft_putchar(base[n % 16]);
    len++;
    return (len);
}