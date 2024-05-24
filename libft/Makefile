# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: prynty <prynty@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/17 18:26:18 by prynty            #+#    #+#              #
#    Updated: 2024/05/24 14:55:45 by prynty           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= libft.a

SRCS		= ft_strchr.c

AR			= ar -rcs

CC 			= cc

CFLAGS 		= -Wall -Wextra -Werror

OBJS		= ${SRCS:.c=.o}

all: 		$(NAME)

$(NAME):	${OBJS}
			$(AR) $@ $?

%.o: %.c
			$(CC) -c $(CFLAGS) $?

clean:
			rm -f $(OBJS)
	
fclean: 	clean
			rm -f $(NAME)
	
re: 		fclean all

.PHONY: all clean fclean re
