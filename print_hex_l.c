/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex_l.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amamun <amamun@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 21:52:59 by amamun            #+#    #+#             */
/*   Updated: 2025/11/12 21:54:30 by amamun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int print_hex_l(unsigned long nbr)
{
    int ret_val;
    char str[] = "0123456789abcdef";

    ret_val = 0;
    if (nbr >= 16)
        ret_val += print_hex_l(nbr / 16);
    ret_val += ft_putchar_fd(str[nbr % 16]);
    return (ret_val);
}