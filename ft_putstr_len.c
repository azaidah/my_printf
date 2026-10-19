/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaidah <azaidah@student.24amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 12:27:23 by azaidah           #+#    #+#             */
/*   Updated: 2026/10/19 12:31:11 by azaidah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int    ft_putstr_len(char *s)
{
    int len;
    
    len = 0;
    if (!s)
        return (ft_putstr_len("(null)"));
    while (s[len])
    {
        ft_putchar(s[len]);
        len++;
    }
    return (len);
}