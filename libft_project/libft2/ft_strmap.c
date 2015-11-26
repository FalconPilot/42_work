

#include <libft.h>

char	*ft_strmap(const char *s, char (*f)(char))
{
	int		i;
	char	*copy;

	i = 0;
	copy = malloc(sizeof(const char) * ft_strlen(s) + 1);
	while (s[i])
	{
		copy[i] = f(s[i]);
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
