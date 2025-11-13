/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amamun <amamun@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 01:15:20 by amamun            #+#    #+#             */
/*   Updated: 2025/11/13 17:17:27 by amamun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_u_fd(unsigned int n)
{
	char	c;
	int		ret_val;

	ret_val = 0;
	if (n >= 10)
		ret_val += ft_putnbr_u_fd(n / 10);
	c = (char)(n % 10) + '0';
	ret_val += ft_putchar_fd(c);
	return (ret_val);
}
