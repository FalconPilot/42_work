

#include <libft.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int		i;
	int		i2;
	size_t	max;

	i = ft_strlen(dst);
	i2 = 0;
	max = ft_strlen(dst) - size;
	while ((size_t)i < max)
	{
		dst[i] = src[i2];
		i++;
		i2++;
	}
	dst[i] = '\0';
	return (max + (size_t)i2);
}
