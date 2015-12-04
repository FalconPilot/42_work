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

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	i2;

	i = 0;
	while (dst[i] && i < size)
		i++;
	i2 = i;
	while (i < size - 1 && src[i - i2])
	{
		dst[i] = src[i - i2];
		i++;
	}
	if (i2 < size)
		dst[i] = '\0';
	return (i);
}
