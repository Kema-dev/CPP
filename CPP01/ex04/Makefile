# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/11 07:04:05 by jjourdan          #+#    #+#              #
#    Updated: 2021/12/06 14:41:53 by jjourdan         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME		=	replace

ARGS		=	file "sur" "pas moi"

CC			=	clang++

RM			=	rm -rf

FLAGS		=	-Wall -Wextra -Werror -std=c++98

DEBUG_FLAGS	=	-Wall -Wextra -std=c++98 -fsanitize=address

DEBUG		=	debug.out

SRC			=	replace.cpp

OBJ			=	$(SRC:.cpp=.o)

%.o:			%.cpp $(INCS)
	$(CC) $(FLAGS) -o $@ -c $<

$(NAME):		$(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)

$(DEBUG):		$(OBJ)
	$(CC) $(DEBUG_FLAGS) -o $(DEBUG) $(OBJ)

all:			$(NAME)

sanit:			$(DEBUG)

test:			$(DEBUG)
	echo "mais c'etait sur en fait" > file
	./$(DEBUG) $(ARGS)
	-diff file file.replace

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(DEBUG)
	rm -f file file.replace

re:	fclean all

.PHONY: all clean fclean re