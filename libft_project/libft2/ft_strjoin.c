#include <libft.h>

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		i;
	int		i2;
	int		len;
	char	*copy;

	i = 0;
	i2 = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	copy = ft_memalloc(len + 1);
	if (!copy)
		return (NULL);
	while (s1[i])
	{
		copy[i] = s1[i];
		i++;
	}
	while (s2[i2])
	{
		copy[i + i2] = s2[i2];
		i2++;
	}
	copy[i + i2] = '\0';
	return (copy);
}
