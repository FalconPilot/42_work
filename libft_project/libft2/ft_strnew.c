

#include <libft.h>

char	*ft_strnew(size_t size)
{
	int		i;
	char	*str;

	i = 0;
	str = ft_memalloc(sizeof(char) * size);
	while ((size_t)i < size)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}
