/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpallies <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 14:15:37 by rpallies          #+#    #+#             */
/*   Updated: 2015/11/26 08:49:37 by rpallies         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		ret;

	i = 0;
	ret = 0;
	while (s1[i] && i < n)
	{
		ret += s1[i];
		i++;
	}
	i = 0;
	while (s2[i] && i < n)
	{
		ret -= s2[i];
		i++;
	}
	return (ret);
}
