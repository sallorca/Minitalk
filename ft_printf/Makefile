# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sallorca <sallorca@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/15 14:48:56 by sallorca          #+#    #+#              #
#    Updated: 2022/11/25 15:23:49 by sallorca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=		libftprintf.a

SRC			=		ft_printf.c ft_printf_arg1.c ft_printfarg2.c \


OBJT		=		$(SRC:.c=.o)

CFLAGS		=		-Wall -Wextra -Werror

all:				$(NAME)

$(NAME):
					gcc -c $(CFLAGS) $(SRC)
					ar rcs $(NAME) $(OBJT)

clean:
					rm -f $(OBJT)

fclean:				clean
					rm -f $(NAME)

re:					fclean all

.PHONY: all, clean, fclean, re
