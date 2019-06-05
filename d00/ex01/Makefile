# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/05 12:06:55 by tnghondz          #+#    #+#              #
#    Updated: 2019/06/05 12:06:56 by tnghondz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= phonebook

SRC			= Contact.class.cpp phonebook.cpp
OBJ			= Contact.class.o phonebook.o

CXX			= clang++
CXXFLAGS	= -Wall -Wextra -Werror  -std=c++98

.PHONY: all clean fclean re

all: $(NAME)

%.o:%.c
	$(CXX) $(CXXFLAGS) -o $@ -c $<

$(NAME): $(OBJ)
	$(CXX) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:
	@$(MAKE) fclean --no-print-directory
	@$(MAKE) all --no-print-directory
