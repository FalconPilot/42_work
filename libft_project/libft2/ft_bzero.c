/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpallies <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:26:19 by rpallies          #+#    #+#             */
/*   Updated: 2015/11/24 18:39:32 by rpallies         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*buf;

	i = 0;
	buf = s;
	while (i < n)
	{
		if (buf[i])
			buf[i] = '\0';
		i++;
	}
	s = buf;
}
