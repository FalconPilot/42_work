# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rpallies <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/24 12:56:26 by rpallies          #+#    #+#              #
#    Updated: 2015/12/04 14:56:36 by rpallies         ###   ########.fr        #
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
				ft_itoa.c			\
				ft_memalloc.c		\
				ft_memccpy.c		\
				ft_memchr.c			\
				ft_memcmp.c			\
				ft_memcpy.c			\
				ft_memdel.c			\
				ft_memmove.c		\
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
				ft_strcpy.c			\
				ft_strncpy.c		\
				ft_strchr.c			\
				ft_strrchr.c		\
				ft_strcmp.c			\
				ft_strdel.c			\
				ft_strdup.c			\
				ft_strjoin.c		\
				ft_strequ.c			\
				ft_striter.c		\
				ft_striteri.c		\
				ft_strlcat.c		\
				ft_strlen.c			\
				ft_strmap.c			\
				ft_strmapi.c		\
				ft_strncat.c		\
				ft_strncmp.c		\
				ft_strnequ.c		\
				ft_strnew.c			\
				ft_strsplit.c		\
				ft_strstr.c			\
				ft_strnstr.c		\
				ft_strsub.c			\
				ft_strtrim.c		\
				ft_tolower.c		\
				ft_toupper.c		\
				ft_lstnew.c			\
				ft_lstdelone.c		\
				ft_lstdel.c			\
				ft_lstadd.c			\
				ft_lstiter.c		\
				ft_lstmap.c

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

norme: header
	@echo "${GRE}  Verification de la norme${STD}\n"
	@norminette $(SRC) libft.h
	@echo "${RED}  \nTotal errors :${STD}" $(shell norminette $(SRC) libft.h | grep -v "Norme" | wc -l)

clean: header
	@echo " ${RED}-Nettoyage des fichiers objet...${STD}"
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(LIB)
	@echo " ${RED}-Nettoyage de la librairie...${STD}"

re: fclean all
