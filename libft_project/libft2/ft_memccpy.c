/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpallies <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 13:53:00 by rpallies          #+#    #+#             */
/*   Updated: 2015/12/04 15:20:44 by rpallies         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t					i;
	unsigned char			*copy;
	const unsigned char		*s;

	i = 0;
	copy = dst;
	s = src;
	while (i < n)
	{
		copy[i] = s[i];
		if (copy[i] == (unsigned char)c)
			return (dst + i);
		i++;
	}
	return (NULL);
}
