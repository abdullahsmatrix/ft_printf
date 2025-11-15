/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amamun <amamun@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 22:49:17 by amamun            #+#    #+#             */
/*   Updated: 2025/11/13 17:40:48 by amamun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_pointer(void *ptr)
{
	uintptr_t	address;
	int			ret_val;

	address = (uintptr_t)ptr;
	ret_val = 0;
	if (!address)
		ret_val += ft_putstr_fd("(nil)");
	else
	{
		ret_val += ft_putstr_fd("0x");
		ret_val += print_hex_l(address);
	}
	return (ret_val);
}
