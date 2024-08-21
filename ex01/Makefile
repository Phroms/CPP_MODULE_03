# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agrimald <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/20 18:43:05 by agrimald          #+#    #+#              #
#    Updated: 2024/08/20 18:43:07 by agrimald         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ScavTrap
CPP = g++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -rf
CYAN = \033[96m
END_COLOR = \033[0m
RED = \033[91m

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp

OBJECTS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
		 @echo "$(CYAN)\nCompiling!!!\n$(END_COLOR)"
		 $(CPP) $(CPPFLAGS) -o $(NAME) $(OBJECTS)
		
fclean: clean
		$(RM) $(NAME) $(OBJECTS)

clean:
		@echo "$(RED)\nRemoving!!!\n$(END_COLOR)"
		$(RM) $(OBJECTS)

re: all clean all

.PHONY: all fclean clean all