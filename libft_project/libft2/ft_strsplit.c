/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpallies <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 14:17:31 by rpallies          #+#    #+#             */
/*   Updated: 2015/12/04 14:17:35 by rpallies         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		word_count(const char *s, char c)
{
	int		i;
	int		words;

	i = 0;
	words = 0;
	while (s[i])
	{
		while (s[i] == (const char)c && s[i])
			i++;
		if (s[i])
			words++;
		while (s[i] != (const char)c && s[i])
			i++;
	}
	return (words);
}

char	**ft_strsplit(const char *s, char c)
{
	int		i;
	int		len;
	char	**tab;

	if (!s)
		return (NULL);
	i = 0;
	len = word_count(s, c);
	tab = (char**)malloc(sizeof(*tab) * (len + 1));
	while (s[i])
	{
		len = 0;
		while (s[i] == (const char)c && s[i])
			i++;
		while (s[i + len] != (const char)c && s[i + len])
			len++;
		if (len > 0 && s[i])
		{
			*tab = ft_strsub(s, i, len);
			tab++;
			i += len;
		}
	}
	**tab = '\0';
	return (tab);
}
