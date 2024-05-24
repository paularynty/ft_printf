# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: prynty <prynty@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/15 12:18:07 by prynty            #+#    #+#              #
#    Updated: 2024/05/24 14:56:24 by prynty           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= libftprintf.a

LIBFTNAME 	= ./libft/libft.a

LIBFTDIR	= ./libft

AR			= ar -rcs

RM			= rm -rf

CC 			= cc

CFLAGS 		= -Wall -Wextra -Werror

SRCS		= ft_printf.c \
			  ft_print_char.c \
			  ft_print_hex.c \
			  ft_print_nbr.c \
			  ft_print_nbr_unsigned.c \
			  ft_print_ptr.c \
			  ft_print_str.c \

OBJS		= ${SRCS:.c=.o}

%.o: %.c
			$(CC) -c $(CFLAGS) $< -o $@

all: 		${LIBFTNAME} ${NAME}

${LIBFTNAME}:
			make -C ${LIBFTDIR}

$(NAME):	${OBJS}
			cp ${LIBFTDIR}/libft.a .
			mv libft.a ${NAME}
			$(AR) ${NAME} ${OBJS}
clean:
			${RM} $(OBJS)
			make clean -C ${LIBFTDIR}

fclean: 	clean
			${RM} $(NAME)
			make fclean -C ${LIBFTDIR}

re: 		fclean all

.PHONY: all clean fclean re
