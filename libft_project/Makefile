# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rpallies <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/24 15:04:04 by rpallies          #+#    #+#              #
#    Updated: 2015/11/26 12:40:58 by rpallies         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RED =		\033[31m
GRE =		\033[32m
YEL =		\033[33m
BLU =		\033[34m
STD =		\033[39m

NAME =		debug_program
PROG =		main.c

DIR =		libft2/
LIB =		-L./$(DIR) -lft
FLAGS =		-Wall -Wextra -Werror -I$(DIR)

SRC =		test_atoi.c			\
			test_bzero.c		\
			test_isalnum.c		\
			test_isalpha.c		\
			test_isascii.c		\
			test_isdigit.c		\
			test_isprint.c		\
			test_strcat.c		\
			test_strstr.c		\
			test_strncat.c

OBJ =		$(SRC:.c=.o)

$(NAME): header $(OBJ)
	@echo "  ${BLU}+Compilation :${STD}" $@
	@gcc $(FLAGS) $(PROG) $(OBJ) $(LIB) -o $(NAME)
	@echo "  ${YEL}Compilation terminee !${STD}"

%.o: %.c
	@echo "  ${GRE}+Compilation :${STD}" $^
	@gcc $(FLAGS) -c $^

clean: header
	@echo "  ${RED}-Nettoyage des fichiers objet${STD}"
	@rm -f $(OBJ)

fclean: clean
	@echo "  ${RED}-Nettoyage du programme de test${STD}"
	@rm -f $(NAME)

all: $(NAME)

re: clean all

header:
	@clear
	@echo "${YEL}"
	@echo "  ============================="
	@echo "  |  Programme de test libft  |"
	@echo "  ============================="
	@echo "${STD}"
