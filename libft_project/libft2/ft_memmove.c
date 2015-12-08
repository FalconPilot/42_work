/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpallies <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 14:17:38 by rpallies          #+#    #+#             */
/*   Updated: 2015/12/04 14:17:39 by rpallies         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*s1;
	unsigned char	*s2;
	unsigned char	*buf;

	s1 = (unsigned char*)dst;
	s2 = (unsigned char*)src;
	buf = (unsigned char*)malloc(sizeof(unsigned char) * len);
	ft_memcpy(buf, s2, len);
	ft_memcpy(s1, buf, len);
	free(buf);
	return (dst);
}
