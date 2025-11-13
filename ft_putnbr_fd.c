/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amamun <amamun@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 23:12:50 by amamun            #+#    #+#             */
/*   Updated: 2025/11/13 02:38:52 by amamun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr_fd(int n)
{
    char c;
    int ret_val;
    long nbr;
    
    nbr = n;
    ret_val = 0;
    if(nbr < 0)
    {
        ret_val += ft_putchar_fd('-');
        nbr *= -1;
    }
    if(nbr > 9)
        ret_val += ft_putnbr_fd(nbr/10);
    c = (char) (nbr % 10) + '0';
    ret_val += ft_putchar_fd(c);
    return (ret_val);
}