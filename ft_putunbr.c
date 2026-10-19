/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaidah <azaidah@student.24amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 12:35:20 by azaidah           #+#    #+#             */
/*   Updated: 2026/10/19 12:35:31 by azaidah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int    ft_putunbr(unsigned int n)
{
    int len;

    len = 0;
    if (n >= 10)
        len += ft_putunbr(n / 10);
    ft_putchar(n % 10 + '0');
    len++;
    return (len);
}