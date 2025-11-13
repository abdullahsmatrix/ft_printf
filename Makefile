# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amamun <amamun@student.42warsaw.pl>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/09 23:29:03 by amamun            #+#    #+#              #
#    Updated: 2025/11/10 01:13:54 by amamun           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a
SRCS	=	print_hex_l.c print_hex_u.c print_pointer.c ft_putstr_fd.c ft_putnbr_fd.c ft_putnbr_u_fd.c ft_putchar_fd.c ft_printf.c
OBJS	=	$(SRCS:.c=.o)
CC		=	cc
CFLAGS	=	-Wall -Werror -Wextra
RM		=	rm -f

all		:	$(NAME)

$(NAME)	:	$(OBJS)
			ar crs $(NAME) $(OBJS)

clean	:	
			$(RM) $(OBJS)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re
