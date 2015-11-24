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

NAME =		debug_program
PROG =		main.c

DIR =		libft/
LIB =		-L./$(DIR) -lft
FLAGS =		-Wall -Wextra -Werror -I$(DIR)

$(NAME): header
	@gcc $(FLAGS) $(PROG) $(LIB) -o $(NAME)

header:
	@clear
	@echo "---Programme de test---"
	@echo ""
