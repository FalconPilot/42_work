/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpallies <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 08:22:45 by rpallies          #+#    #+#             */
/*   Updated: 2015/11/26 08:22:50 by rpallies         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*strdup(const char *s1)
{
	int		i;
	int		size;
	char	*copy;

	i = 0;
	size = ft_strlen(s1);
	copy = malloc(sizeof(char) * size + 1);
	while (i < size)
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
