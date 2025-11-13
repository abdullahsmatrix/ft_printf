/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amamun <amamun@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 22:49:17 by amamun            #+#    #+#             */
/*   Updated: 2025/11/13 01:04:25 by amamun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int print_pointer(void *ptr)
{
    uintptr_t address;
    int ret_val;
    
    address = (uintptr_t)ptr;
    ret_val = 0;
    /* write 0x prefix (two chars) using ft_putstr_fd */
    ret_val += ft_putstr_fd("0x");
    if (address == 0)
        ret_val += ft_putchar_fd('0');
    else
        ret_val += print_hex_l(address);
    return (ret_val);
}

