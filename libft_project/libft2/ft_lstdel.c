/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpallies <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 14:22:37 by rpallies          #+#    #+#             */
/*   Updated: 2015/12/09 14:22:41 by rpallies         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

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
