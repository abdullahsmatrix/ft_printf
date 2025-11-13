/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amamun <amamun@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 22:57:32 by amamun            #+#    #+#             */
/*   Updated: 2025/11/13 01:16:59 by amamun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putstr_fd(char *c)
{
    int i;
    int j;

    i = 0;
    j = 0;
    if (!c)
    {
        write(1, "(null)", 6);
        return (6);
    }
    while(c[i] != '\0')
    {
        j += write(1, &c[i], 1);
        i++;
    }

    //ALTERNATE APPROACH

    // if(c)
    //     write(fd, c, ft_strlen(c));
    return (j);
}