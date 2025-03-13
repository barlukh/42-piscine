# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/04 12:20:07 by bgazur            #+#    #+#              #
#    Updated: 2025/03/07 10:19:06 by bgazur           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = libft.a
SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS = ${SRCS:.c=.o}
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -I includes -c $< -o ${<:.c=.o}

${LIB}: ${OBJS}
	ar rcs ${LIB} ${OBJS}

all: ${LIB}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${LIB}

re: fclean all

.PHONY: all clean fclean re

