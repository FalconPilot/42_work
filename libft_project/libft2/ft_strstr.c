#include <libft.h>

char	*ft_strstr(const char *s1, const char *s2)
{
	int		len;
	char	*dst;

	dst = (char*)s1;
	len = ft_strlen(s2);
	if (s2[0])
		return ((char*)s1);
	while (*dst)
	{
		if (*dst == *s2 && ft_strncmp(dst, s2, len))
			return (dst);
		else
			dst++;
	}
	return (NULL);
}
