# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sallorca <sallorca@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/22 13:20:31 by sallorca          #+#    #+#              #
#    Updated: 2022/10/17 16:42:26 by sallorca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=		libft.a

SRC			=		ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
					ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
					ft_strncmp.c ft_strnstr.c ft_memset.c ft_bzero.c ft_memcpy.c \
					ft_memmove.c ft_memcmp.c ft_memchr.c ft_toupper.c ft_tolower.c \
					ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
					ft_strtrim.c ft_split.c ft_itoa.c ft_striteri.c ft_strmapi.c \
					ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \

OBJT		=		$(SRC:.c=.o)

BONUS		=		ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
					ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c\

BONUS_OBJT	=		$(BONUS:.c=.o)

CFLAGS		=		-Wall -Werror -Wextra

all:				$(NAME)

$(NAME):
					gcc	-c	$(CFLAGS) $(SRC)
					ar	rcs	$(NAME)	$(OBJT)

bonus:				$(OBJT) $(BONUS_OBJT)
					ar	rcs $(NAME) $(OBJT) $(BONUS_OBJT)

clean:
					rm	-f	$(OBJT)

fclean:				clean
					rm	-f	$(NAME) $(BONUS_OBJT)

re:					fclean	all

.PHONY:	all, clean, fclean, re 
