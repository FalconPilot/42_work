/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpallies <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 12:36:46 by rpallies          #+#    #+#             */
/*   Updated: 2015/12/04 15:25:00 by rpallies         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strrchr(const char *s, int c)
{
	const char	*str;
	const char	*ret;

	str = s;
	ret = NULL;
	while (*str)
	{
		if (*str == (const char)c)
			ret = str;
		else if (!*(str + 1) && !(char)c)
			ret = (str + 1);
		str++;
	}
	s = ret;
	return ((char*)s);
}
