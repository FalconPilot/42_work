#include <libft.h>
#include <stdio.h>

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list	*tmp;
	t_list	*tnext;

	tmp = *alst;
	while (tmp)
	{
		tnext = tmp->next;
		ft_lstdelone(&tmp, del);
		tmp = tnext;
	}
	*alst = NULL;
}
