/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpallies <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 08:21:25 by rpallies          #+#    #+#             */
/*   Updated: 2015/12/04 15:40:00 by rpallies         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*inc_pointer(char *s1, size_t tmp)
{
	while (*s1 && tmp)
	{
		s1++;
		tmp--;
	}
	return (s1);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*s1;
	char	*s2;
	size_t	len;
	size_t	tmp;

	tmp = size;
	s1 = dst;
	s2 = (char*)src;
	s1 = inc_pointer(s1, tmp);
	len = (size_t)(s1 - dst);
	tmp = size - len;
	if (!tmp)
		return (len + ft_strlen(s2));
	while (*s2)
	{
		if (tmp != 1)
		{
			*s1++ = *s2;
			tmp--;
		}
		s2++;
	}
	*s1 = '\0';
	return (len + (s2 - src));
}
