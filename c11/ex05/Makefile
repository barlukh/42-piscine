#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/10 12:54:45 by bgazur            #+#    #+#              #
#    Updated: 2025/03/10 13:08:50 by bgazur           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET = do-op
SRCS = main.c ft_atoi.c ft_putnbr.c operators.c
OBJS = ${SRCS:.c=.o}
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${TARGET}: ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${TARGET}

all: ${TARGET}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${TARGET}

re: fclean all

.PHONY: all clean fclean re

