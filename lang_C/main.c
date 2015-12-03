#include <main.h>

/* Error ID display */

void	ret_error(int errid)
{
	if (errid <= 9 && errid >= 0)
		printf("#Err[0%d] (More infos in manual.txt)\n", errid);
	else if (errid > 9)
		printf("#Err[%d] (More infos in manual.txt)\n", errid);
	else
		printf("#Undefined error\n");
}

/* Main function parser */

void	main_parser(char *func_name)
{
	int		func_id;

	func_id = atoi(func_name);
	switch (func_id)
	{
		case 0 : ret_error(2); break ;
		default : ret_error(2); break ;
	}
}

/* File reading */

void	file_read(int fd)
{
	char	buf;

	while (read(fd, &buf, BUFF_SIZE))
	{
	}
}

/* Main routine */

int		main(int argc, char **argv)
{
	int		fd;

	if (argc != 2)
	{
		ret_error(0);
		return (EXIT_FAILURE);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		ret_error(1);
		return (EXIT_FAILURE);
	}
	file_read(fd);
	return (EXIT_SUCCESS);
}
