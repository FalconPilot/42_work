/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpallies <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 14:10:02 by rpallies          #+#    #+#             */
/*   Updated: 2015/12/04 15:47:22 by rpallies         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t					i;
	unsigned const char		*str1;
	unsigned const char		*str2;

	i = 0;
	if (!s1 || !s2 || n <= 0)
		return (0);
	str1 = (unsigned const char)s1;
	str2 = (unsigned const char)s2;
	while (str1[i] == str2[i] && i < n)
		i++;
	return ((int)(str1[i] - str2[i]));
}
