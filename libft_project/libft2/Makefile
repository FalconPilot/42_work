# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rpallies <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/24 12:56:26 by rpallies          #+#    #+#              #
#    Updated: 2015/11/26 09:44:37 by rpallies         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RED =			\033[31m
GRE =			\033[32m
YEL =			\033[33m
BLU =			\033[34m
STD =			\033[39m

NAME =			libft
LIB =			libft.a
FLAGS =			-Wall -Wextra -Werror -I.

SRC =			$(shell ls | grep "ft_" | grep ".c")
OBJ =			$(SRC:.c=.o)

$(NAME): header $(LIB)
	@echo " ${YEL}Compilation terminee !${STD}"

$(LIB): $(OBJ)
	@echo " ${BLU}+Compilation :${STD} $(LIB)"
	@ar rc $(LIB) $(OBJ)
	@ranlib $(LIB)

%.o: %.c
	@echo " ${GRE}+Compilation :${STD} $^"
	@gcc $^ $(FLAGS) -c

header:
	@clear
	@echo "${YEL}"
	@echo "  =================="
	@echo "  |  Projet Libft  |"
	@echo "  =================="
	@echo "${STD}"

all: $(NAME)

clean: header
	@echo " ${RED}-Nettoyage des fichiers objet...${STD}"
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(LIB)
	@echo " ${RED}-Nettoyage de la librairie...${STD}"

re: fclean all
