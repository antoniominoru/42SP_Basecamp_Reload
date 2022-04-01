# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/31 16:53:04 by aminoru-          #+#    #+#              #
#    Updated: 2022/03/31 19:47:07 by aminoru-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ./srcs/ft_display_file.c
NAME = ft_display_file
OBJS = ${SRCS:.c=.o}
CC = gcc
FLAGS = -Wall -Werror -Wextra
.c.o:
		${CC} ${FLAGS} -c $< -I includes -o ${<:.c=.o} 

all: ${NAME}

${NAME}: ${OBJS}
		${CC} ${FLAGS} ${OBJS} -o ${NAME}

clean:
		rm -f ${OBJS}

fclean: clean
		rm -f ${NAME}
