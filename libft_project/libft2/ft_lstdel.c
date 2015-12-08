#include <libft.h>
#include <stdio.h>

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list	*tmp;

	if (alst)
	{
		tmp = *alst;
		ft_lstdelone(alst, del);
		if (tmp->next)
			ft_lstdel(&tmp->next, del);
	}
}
