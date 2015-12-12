#ifndef MAIN_H
# define MAIN_H
# define RED	"\x1b[31m"
# define GRE	"\x1b[32m"
# define YEL	"\x1b[33m"
# define STD	"\x1b[39m"

# include		<stdlib.h>
# include		<stdio.h>
# include		<unistd.h>
# include		<fcntl.h>
# include		<ctype.h>

# include		<main.h>
# include		<libft.h>

int				test_atoi(FILE *f);
int				test_isalpha(FILE *f);
int				test_isdigit(FILE *f);
int				test_isalnum(FILE *f);
int				test_isascii(FILE *f);

#endif
