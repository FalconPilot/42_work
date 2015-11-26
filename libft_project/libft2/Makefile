# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rpallies <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/24 12:56:26 by rpallies          #+#    #+#              #
#    Updated: 2015/11/24 18:40:30 by rpallies         ###   ########.fr        #
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

SRC =			ft_atoi.c			\
				ft_bzero.c			\
				ft_isalnum.c		\
				ft_isalpha.c		\
				ft_isascii.c		\
				ft_isdigit.c		\
				ft_isprint.c		\
				ft_memalloc.c		\
				ft_memdel.c			\
				ft_memset.c			\
				ft_putchar.c		\
				ft_putchar_fd.c		\
				ft_putendl.c		\
				ft_putendl_fd.c		\
				ft_putnbr.c			\
				ft_putnbr_fd.c		\
				ft_putstr.c			\
				ft_putstr_fd.c		\
				ft_strcat.c			\
				ft_strclr.c			\
				ft_strcmp.c			\
				ft_strdel.c			\
				ft_strdup.c			\
				ft_strlen.c			\
				ft_strmap.c			\
				ft_strncat.c		\
				ft_strncmp.c		\
				ft_strnew.c			\
				ft_tolower.c		\
				ft_toupper.c

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
