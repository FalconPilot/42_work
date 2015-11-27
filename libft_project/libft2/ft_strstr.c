#include <libft.h>

char	*strstr(const char *s1, const char *s2)
{
	int		i;
	int		len;
	char	*dst;

	i = 0;
	dst = (char*)s1;
	len = ft_strlen(s2);
	if (s2[0])
		return ((char*)s1);
	while (dst)
	{
		if (!ft_strncmp(s1, s2, len))
			return (dst);
		else
			dst++;
	}
	return (NULL);
}
