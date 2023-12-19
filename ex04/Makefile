# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/19 12:25:35 by ndesprez          #+#    #+#              #
#    Updated: 2023/12/19 13:08:32 by ndesprez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp

NAME = sed

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