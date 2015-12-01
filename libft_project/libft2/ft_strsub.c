#include <libft.h>

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char		*copy;

	i = 0;
	copy = ft_memalloc(len + 1);
	if (!copy)
		return (NULL);
	while (i < len && s[i + start])
	{
		copy[i] = (char)s[start + i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
