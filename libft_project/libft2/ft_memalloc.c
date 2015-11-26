

#include <libft.h>

void	*ft_memalloc(size_t size)
{
	void	*ret;

	ret = malloc(size);
	if (!ret)
		ret = 0;
	return (ret);
}
