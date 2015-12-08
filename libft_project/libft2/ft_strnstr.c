/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpallies <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 14:10:37 by rpallies          #+#    #+#             */
/*   Updated: 2015/12/04 15:18:58 by rpallies         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	i2;
	size_t	len;

	i = 0;
	i2 = 0;
	len = ft_strlen(s2);
	if (!len || !n)
		return ((char*)s1);
	while (s1[i] && (i + i2) < n)
	{
		while (s1[i + i2] == s2[i2] && s1[i + i2] && s2[i2] && (i + i2) < n)
			i2++;
		if (!s2[i2])
			return ((char*)(s1 + i));
		i2 = 0;
		i++;
	}
	return (NULL);
}
