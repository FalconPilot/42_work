

#include <libft.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		i;
	size_t	ret;

	i = 0;
	ret = size;
	while (dst[size - ret] && ret > 0)
		ret--;
	if (ret)
		return (ret);
	return (ret);
}
