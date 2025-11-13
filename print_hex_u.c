/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amamun <amamun@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 23:07:29 by amamun            #+#    #+#             */
/*   Updated: 2025/11/13 17:28:10 by amamun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex_u(unsigned long nbr)
{
	int		ret_val;
	char	*str;

	str = "0123456789ABCDEF";
	ret_val = 0;
	if (nbr >= 16)
		ret_val += print_hex_u(nbr / 16);
	ret_val += ft_putchar_fd(str[nbr % 16]);
	return (ret_val);
}
