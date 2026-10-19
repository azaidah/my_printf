/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaidah <azaidah@student.24amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 12:47:29 by azaidah           #+#    #+#             */
/*   Updated: 2026/10/19 19:14:56 by azaidah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr_len(unsigned long ptr, char *base)
{
    int len;

    len = 0;
    if (ptr == NULL)
    {
        len += ft_putstr("(nil)");
        return (len);
    }
    ft_putstr("0x");
    len += 2;
    len += ft_puthex_len((unsigned long)ptr, base);
    return (len);
}