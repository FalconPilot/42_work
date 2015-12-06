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

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		i2;
	int		len;
	char	c;

	i = 0;
	i2 = 0;
	len = ft_strlen(s2);
	if (len == 0)
		return ((char*)s1);
	while (s1[i])
	{
		c = s1[i];
		while (s1[i + i2] == s2[i2])
		{
			if (s2[i2])
				return ((char*)s1 + i);
			i2++;
		}
		i2 = 0;
		i++;
	}
	return (NULL);
}
