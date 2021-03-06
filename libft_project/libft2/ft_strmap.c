/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpallies <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 08:23:52 by rpallies          #+#    #+#             */
/*   Updated: 2015/11/26 08:36:27 by rpallies         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strmap(const char *s, char (*f)(char))
{
	int		i;
	char	*copy;

	i = 0;
	copy = malloc(sizeof(const char) * ft_strlen(s) + 1);
	if (!copy)
		return (NULL);
	while (s[i])
	{
		copy[i] = f(s[i]);
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
