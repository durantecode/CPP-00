# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/22 23:57:09 by ldurante          #+#    #+#              #
#    Updated: 2022/05/17 12:28:35 by ldurante         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# VARIABLE DECLARATIONS #

NAME = account
CXX = clang++
RM = rm -f
CXXFLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic

# COLORS #

RED = \033[0;31m
GREEN = \033[0;32m
GREY = \033[2;37m
MAGENTA = \033[0;35m
NO_COLOR = \033[0m

# SOURCES & OBJECTS #

SRCS =	tests.cpp Account.cpp

OBJS = $(SRCS:.cpp=.o)

# RULES #

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREY) $(NAME) compiled $(GREEN) ✔✔✔ $(NO_COLOR)"

clean:
	@clear
	@$(RM) $(OBJS)
	@echo "$(RED) **** object files removed **** $(NO_COLOR)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(RED) **** $(NAME) removed **** $(NO_COLOR)"

re: fclean all

.PHONY: all re clean fclean test

.SILENT: $(OBJS)