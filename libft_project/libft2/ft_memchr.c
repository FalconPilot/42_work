/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpallies <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 13:52:54 by rpallies          #+#    #+#             */
/*   Updated: 2015/12/04 13:52:55 by rpallies         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned const char	*str;

	i = 0;
	str = s;
	while (i < n)
	{
		if (str[i] == (unsigned const char)c)
			return ((void*)(s + i));
		i++;
	}
	return (NULL);
}
