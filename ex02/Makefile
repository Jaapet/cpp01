# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/13 15:54:16 by ndesprez          #+#    #+#              #
#    Updated: 2023/12/13 16:02:40 by ndesprez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp

NAME = string

CC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 #-pedantic

OBJS = $(SRCS:.cpp=.o)

$(NAME): $(OBJS)
		$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

all:	$(NAME)

clean:
		rm -f $(OBJS)

fclean:	clean
		rm -f $(NAME)

re:		fclean all

.PHONY: all clean fclean re