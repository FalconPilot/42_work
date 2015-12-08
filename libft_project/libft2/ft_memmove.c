/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpallies <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 14:17:38 by rpallies          #+#    #+#             */
/*   Updated: 2015/12/04 14:17:39 by rpallies         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t					i;
	unsigned const char		*s;
	unsigned char			*d;

	i = 0;
	s = src;
	d = dst;
	while (i < len)
	{
		if (d[i] != s[i])
			d[i] = s[i];
		i++;
	}
	dst = d;
	return (dst);
}
