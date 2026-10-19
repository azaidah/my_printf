/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaidah <azaidah@student.24amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 12:47:29 by azaidah           #+#    #+#             */
/*   Updated: 2026/10/19 13:59:48 by azaidah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr_len(unsigned long ptr, char *base)
{
    int len;

    len = 0;
    if (!ptr)
    {
        ft_putstr("(nil)");
        return (5);
    }
    ft_putstr("0x");
    len += 2;
    len += ft_puthex_len((unsigned long)ptr, base);
    return (len);
}