/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpallies <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 08:21:25 by rpallies          #+#    #+#             */
/*   Updated: 2015/11/26 08:21:27 by rpallies         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		i;
	size_t	ret;

	i = 0;
	ret = size;
	while (dst[size - ret] && ret > 0)
		ret--;
	if (ret)
		return (ret);
	return (ret);
}
