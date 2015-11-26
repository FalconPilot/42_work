# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rpallies <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/24 15:04:04 by rpallies          #+#    #+#              #
#    Updated: 2015/11/24 17:36:39 by rpallies         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RED =		\033[31m
GRE =		\033[32m
YEL =		\033[33m
STD =		\033[39m

NAME =		debug_program
PROG =		main.c

DIR =		libft2/
LIB =		-L./$(DIR) -lft
FLAGS =		-Wall -Wextra -Werror -I$(DIR)

SRC =		test_atoi.c		\
			test_bzero.c

$(NAME): header
	@echo "  ${GRE}+Compilation du programme de test${STD}"
	@gcc $(FLAGS) $(PROG) $(SRC) $(LIB) -o $(NAME)

clean: header
	@echo "  ${RED}-Nettoyage du programme de test${STD}"
	@rm -f $(NAME)

header:
	@clear
	@echo "${YEL}"
	@echo "  ============================="
	@echo "  |  Programme de test libft  |"
	@echo "  ============================="
	@echo "${STD}"
