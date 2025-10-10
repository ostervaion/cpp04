# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juetxeba <juetxeba@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/04 15:52:58 by juetxeba          #+#    #+#              #
#    Updated: 2025/09/05 16:43:35 by juetxeba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Animals
FLAGS	= -Wall -Wextra -Werror -std=c++98
SRCS	= Animal.cpp Dog.cpp Cat.cpp main.cpp
OBJS	= $(SRCS:.cpp=.o)
CC		= c++

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(OBJS) $(FLAGS) -o $(NAME)
	@echo "Executable $(NAME) created!"

%.o: %.cpp 
	@echo "Compiling $< -> $@"
	@$(CC) -c $(FLAGS) $< -o $@

clean:
	@rm -f $(OBJS)
	@echo "Object files cleaned!"

fclean: clean
	@rm -f $(NAME)
	@echo "Executable cleaned!"

start:
	@mkdir Include && mkdir srcs
	@echo "Directories created"

re: fclean all
.PHONY: all clean fclean re
