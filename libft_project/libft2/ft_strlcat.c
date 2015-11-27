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
	size_t	i;
	int		i2;

	i = 0;
	i2 = 0;
	while (dst[i])
		i++;
	while (i < size && src[i2])
	{
		dst[i] = src[i2];
		i++;
		i2++;
	}
	return (i);
}
