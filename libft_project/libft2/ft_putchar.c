
#include <libft.h>

void	ft_putchar(char c)
{
	write(STDIN_FILENO, &c, 1);
}
