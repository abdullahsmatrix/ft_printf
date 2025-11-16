/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amamun <amamun@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 21:08:43 by amamun            #+#    #+#             */
/*   Updated: 2025/11/13 18:13:59 by amamun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	format_specifier(char specifier, va_list *args)
{
	int	ret_val;

	ret_val = 0;
	if (specifier == 'c')
		ret_val += ft_putchar_fd(va_arg(*args, int));
	else if (specifier == 's')
		ret_val += ft_putstr_fd(va_arg(*args, char *));
	else if (specifier == 'p')
		ret_val += print_pointer(va_arg(*args, void *));
	else if (specifier == 'd')
		ret_val += ft_putnbr_fd(va_arg(*args, int));
	else if (specifier == 'i')
		ret_val += ft_putnbr_fd(va_arg(*args, int));
	else if (specifier == 'u')
		ret_val += ft_putnbr_u_fd(va_arg(*args, unsigned int));
	else if (specifier == 'x')
		ret_val += print_hex_l(va_arg(*args, unsigned int));
	else if (specifier == 'X')
		ret_val += print_hex_u(va_arg(*args, unsigned int));
	else if (specifier == '%')
		ret_val += ft_putchar_fd('%');
	return (ret_val);
}

int	ft_printf(const char *format, ...)
{
	int				i;
	int				return_value;
	va_list			args;

	va_start(args, format);
	return_value = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
			{
				return_value += ft_putchar_fd('%');
				break ;
			}
			return_value += format_specifier(format[i], &args);
		}
		else
			return_value += ft_putchar_fd(format[i]);
		i++;
	}
	va_end(args);
	return (return_value);
}

/*
int main(void)
{
	ft_printf(" Hello this is Abdullah");
	return(0);
} */

