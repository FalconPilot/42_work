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

#include <libft.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*src;

	i = 0;
	src = b;
	while (i < len)
	{
		src[i] = (unsigned char)c;
		i++;
	}
	b = src;
	return (b);
}
