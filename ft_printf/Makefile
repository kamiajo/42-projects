# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hwatercr <hwatercr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/07 22:09:47 by hwatercr          #+#    #+#              #
#    Updated: 2021/11/09 17:02:39 by hwatercr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC	=	ft_printf.c\
		ft_utils.c\
		ft_char.c\
		ft_num.c\
		ft_hex.c
		
OBJ	= ${SRC:.c=.o}
NAME = libftprintf.a
CC = gcc
FLAGS = -Wall -Werror -Wextra
HEADER = ft_printf.h
LIBC = ar rc
LIBR = ranlib
RM = rm -f

${NAME}: ${OBJ} ${HEADER}
	${LIBC} ${NAME} ${OBJ}
	${LIBR} ${NAME}


all: ${NAME}
	
.c.o:	${HEADER}
	${CC} ${FLAGS} -c $< -o ${<:.c=.o} -I ${HEADER}

clean:
	${RM} ${OBJ}
	
fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re