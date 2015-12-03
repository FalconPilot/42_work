# Colors

RED =	\033[31m
GRE =	\033[32m
BLU =	\033[33m
YEL =	\033[34m
STD =	\033[39m

# Variables

NAME =	langc
MAIN =	main.c

SDIR =	./srcs/
SRCS =	$(shell ls $(SDIR) | grep ".c")

OBJS =	$(SRCS:.c=.o)
ODIR =	./objs/
LIBR =	liblang.a
LIB2 =	-llang
FLAG =	-Wall -Wextra -Werror -I./incs/

# Rules

all: $(NAME)
	@echo "  ${YEL}Compilation terminée !${STD}"

$(NAME): header $(LIBR)
	@echo "  ${BLU}+Compilation :${STD}" $@
	@gcc $(MAIN) $(FLAG) -o $(NAME) -L. $(LIB2)

$(LIBR): $(OBJS)
	@echo "  ${BLU}+Compilation :${STD}" $@
	@ar rc $(LIBR) $(shell find $(ODIR) | sed 1d)
	@ranlib $(LIBR)

%.o: $(SDIR)%.c
	@echo "  ${GRE}+Compilation :${STD}" $^
	@gcc -c $^ $(FLAG)
	@mv $@ $(ODIR)$@

header:
	@clear
	@echo "${YEL}"
	@echo "  =========================="
	@echo "  |   Interpréteur Langc   |"
	@echo "  ==========================${STD}\n"

clean: header
	@echo "  ${RED}-Nettoyage des fichiers objet...${STD}"
	@rm -f $(shell find $(ODIR) | sed 1d)

fclean: clean
	@echo "  ${RED}-Nettoyage de la librairie...${STD}"
	@rm -f $(LIBR)
	@echo "  ${RED}-Nettoyage de l'exécutable...${STD}"
	@rm -f $(NAME)

re: fclean all
