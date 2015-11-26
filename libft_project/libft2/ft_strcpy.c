

#include <libft.h>

char	*ft_strcpy(char *dst, const char *src)
{
	int		i;

	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}
