#include <libft.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned const char	*str;

	i = 0;
	str = s;
	while (i < n && *str != (unsigned const char)c)
	{
		str++;
		i++;
	}
	s = str;
	return ((void*)s);
}
