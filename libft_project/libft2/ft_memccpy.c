#include <libft.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t					i;
	unsigned char			*copy;
	const unsigned char		*s;

	i = 0;
	copy = dst;
	s = src;
	while (copy[i] && i < n && s[i] != (const char)c)
	{
		copy[i] = s[i];
		i++;
	}
	dst = copy;
	return (dst);
}
