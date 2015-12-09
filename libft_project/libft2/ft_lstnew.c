/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpallies <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 14:22:07 by rpallies          #+#    #+#             */
/*   Updated: 2015/12/09 14:22:21 by rpallies         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list		*ft_lstnew(const void *content, size_t content_size)
{
	t_list	*cell;

	cell = (t_list*)malloc(sizeof(t_list));
	if (!cell)
		return (NULL);
	if (!content)
	{
		cell->content = NULL;
		cell->content_size = 0;
	}
	else
	{
		cell->content = (void*)malloc(content_size);
		if (!cell->content)
			return (NULL);
		cell->content_size = content_size;
		ft_memcpy(cell->content, (void*)content, content_size);
	}
	cell->next = NULL;
	return (cell);
}
