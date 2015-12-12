# =========================================
#          Libft testing session
# =========================================

# colors

RED =		\033[31m
GRE =		\033[32m
YEL =		\033[33m
BLU =		\033[34m
STD =		\033[39m

# variables

NAME =		lftest
EXEC =		main.c

LDIR =		./libft
LIBR =		-lft

IDIR =		$(LDIR)

SDIR =		./srcs/
SRCS =		test_atoi.c				\
			test_isdigit.c			\
			test_isalpha.c			\
			test_isalnum.c

ODIR =		./objs/
OBJS =		$(SRCS:.c=.o)
OBCC =		$(addprefix $(ODIR),$(OBJS))

FLAG =		-Wall -Wextra -Werror -I$(IDIR)

# rules

all: header $(NAME)

$(NAME): libcomp program
	@echo "${YEL}    ===[Terminé]===${STD}\n"

program: $(OBCC)
	@echo "${BLU} +Compilation :${STD}" $(EXEC)
	@gcc $(FLAG) $(EXEC) $(OBCC) -L$(LDIR) $(LIBR) -o $(NAME)

libcomp:
	@echo "${GRE} +Compiling your Libft library...${STD}"
	@cd $(LDIR) && make

$(ODIR)%.o: $(SDIR)%.c
	@echo "${GRE} +Compilation :${STD}" $^
	@gcc $^ $(FLAG) -c -o $@

clean: header
	@echo "${RED} -Nettoyage des fichiers objet...${STD}"
	@rm -f $(OBCC)

fclean: clean
	@echo "${RED} -Nettoyage de l'exécutable...${STD}"
	@rm -f $(NAME)

re: fclean all

header:
	@echo "${YEL}"
	@echo " _  __ _            _   "
	@echo "| |/ _| |_ ___  ___| |_ "
	@echo "| | |_| __/ _ \/ __| __|"
	@echo "| |  _| ||  __/\__ \ |_ "
	@echo "|_|_|  \__\___||___/\__|"
	@echo "${STD}"
