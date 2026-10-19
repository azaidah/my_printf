/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaidah <azaidah@student.24amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 13:14:21 by azaidah           #+#    #+#             */
/*   Updated: 2026/10/19 19:15:56 by azaidah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>

int ft_printf(const char *format, ...);
int ft_handle_format(char format, va_list args);
int ft_putchar_len(char c);
int ft_putstr_len(char *str);
int ft_putptr_len(unsigned long ptr, char *base);
int ft_putnbr_len(int n);
int ft_putunbr(unsigned int n);
int ft_puthex_len(unsigned int n, char *base);
int ft_putstr(char *s);
int ft_putchar(char c);

#endif