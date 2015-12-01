
#include <libft.h>

void	*ft_memcpy(void *dst, void *src, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*d;

	i = 0;
	s = src;
	d = dst;
	while (s[i] && i < n)
	{
		d[i] = s[i];
		i++;
	}
	dst = d;
	return (dst);
}
