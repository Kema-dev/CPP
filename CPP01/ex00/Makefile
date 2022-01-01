# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/03 16:34:38 by jjourdan          #+#    #+#              #
#    Updated: 2021/12/06 14:41:53 by jjourdan         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME		=	tester.out

CC			=	clang++

RM			=	rm -rf

FLAGS		=	-Wall -Wextra -Werror -std=c++98

SRC			=	Zombie.cpp \
				main.cpp

OBJ			=	$(SRC:.cpp=.o)

INCS		=	Zombie.hpp

%.o:			%.cpp $(INCS)
	$(CC) $(FLAGS) -o $@ -c $<

$(NAME):		$(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)

all:			$(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(DEBUG)

re:	fclean all

.PHONY: all clean fclean re