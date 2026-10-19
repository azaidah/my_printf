/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaidah <azaidah@student.24amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 12:56:29 by azaidah           #+#    #+#             */
/*   Updated: 2026/10/19 12:56:39 by azaidah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int    ft_putstr(char *s)
{
    int len;

    len = 0;
    if (!s)
        return (ft_putstr("(null)"));
    while (s[len])
    {
        ft_putchar(s[len]);
        len++;
    }
    return (len);
}