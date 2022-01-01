# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/11 07:04:05 by jjourdan          #+#    #+#              #
#    Updated: 2021/12/08 14:06:34 by jjourdan         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME		=	tester.out

CC			=	g++

RM			=	rm -rf

FLAGS		=	-Wall -Wextra -Werror -std=c++98

SRC			=	main.cpp \
				Span.cpp

OBJ			=	$(SRC:.cpp=.o)

INCS		=	Span.hpp

%.o:			%.cpp $(INCS)
	$(CC) $(FLAGS) -o $@ -c $<

$(NAME):		$(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)

all:			$(NAME)

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)
	@$(RM) $(DEBUG)

re:	fclean all

.PHONY: all clean fclean re