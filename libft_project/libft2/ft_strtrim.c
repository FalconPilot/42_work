#include <libft.h>

int		is_blank(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

char	*ft_strtrim(const char *s)
{
	int			i;
	int			b;
	int			len;
	char		*copy;

	b = 0;
	len = 0;
	while (is_blank(s[b]))
		b++;
	i = b;
	while (s[i])
	{
		len++;
		i++;
	}
	while (is_blank(s[i - 1]))
	{
		len--;
		i--;
	}
	copy = ft_memalloc(len + 1);
	if (!copy)
		return (NULL);
	copy = ft_memcpy(copy, (char*)s + b, len);
	copy[len] = '\0';
	return (copy);
}
