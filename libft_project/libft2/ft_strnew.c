/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpallies <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 08:23:19 by rpallies          #+#    #+#             */
/*   Updated: 2015/11/26 08:23:20 by rpallies         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strnew(size_t size)
{
	int		i;
	char	*str;

	i = 0;
	str = ft_memalloc(sizeof(char) * size);
	while ((size_t)i < size)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}
