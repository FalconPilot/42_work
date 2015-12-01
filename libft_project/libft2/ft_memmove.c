#include <libft.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t					i;
	unsigned const char		*s;
	unsigned char			*d;

	i = 0;
	s = src;
	d = dst;
	while (i < len)
	{
		d[i] = s[i];
		i++;
	}
	dst = d;
	return (dst);
}
