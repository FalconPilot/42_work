#include <libft.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int						ret;
	size_t					i;
	unsigned const char		*str1;
	unsigned const char		*str2;

	i = 0;
	ret = 0;
	str1 = s1;
	str2 = s2;
	while (i < n)
	{
		ret += (int)str1[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		ret -= (int)str2[i];
		i++;
	}
	return (ret);
}
