/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpallies <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 15:20:50 by rpallies          #+#    #+#             */
/*   Updated: 2015/11/24 15:31:44 by rpallies         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*src;
	unsigned char	swap;

	i = 0;
	src = b;
	swap = c;
	while (i < len)
	{
		src[i] = swap;
		i++;
	}
	b = src;
	return (b);
}
