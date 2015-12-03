#ifndef MAIN_H
# define MAIN_H
# define BUFF_SIZE	1
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <string.h>

typedef struct		s_str
{
	int				length;
	char			*content;
}					str;

typedef struct		s_buff
{
	char			data;
	struct s_buff	*next;
}					buffer;

int		str_trunc(char *str, int i);

#endif
