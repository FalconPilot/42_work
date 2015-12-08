#include <libft.h>

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*copy;
	t_list	*begin;
	t_list	*tmp;
	t_list	*cell;
	
	if (!lst || !f)
		return (NULL);
	tmp = f(lst);
	copy = ft_lstnew(tmp->content, tmp->content_size);
	if (!copy)
		return (NULL);
	begin = copy;
	while (lst->next)
	{
		tmp = f(lst->next);
		cell = ft_lstnew(tmp->content, tmp->content_size);
		ft_lstadd(&copy->next, cell);
		if (!copy)
			return (NULL);
		lst = lst->next;
		copy = copy->next;
	}
	return (begin);
}
