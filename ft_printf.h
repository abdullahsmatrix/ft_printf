#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>
# include <stdio.h>
# include <stddef.h>
# include <stdarg.h>
# include <limits.h>


int ft_printf(const char *format, ... );
int ft_putchar_fd(char c);
int ft_putnbr_fd(int n);
int ft_putnbr_u_fd(unsigned int n);
int ft_putstr_fd(char *c);
int print_hex_l(unsigned long nbr);
int print_hex_u(unsigned long nbr);
int print_pointer(void *ptr);

#endif