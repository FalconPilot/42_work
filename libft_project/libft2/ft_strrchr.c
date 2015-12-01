/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpallies <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 12:36:46 by rpallies          #+#    #+#             */
/*   Updated: 2015/11/26 12:38:37 by rpallies         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*str;

	i = 0;
	str = s;
	str += ft_strlen(str + 1);
	while (*str != (const char)c && i >= 0)
	{
		str--;
		i--;
	}
	s = str;
	return ((char*)s);
}
