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
		if (s[i] != (const char)c && s[i])
			words++;
		while (s[i] != (const char)c && s[i])
			i++;
	}
	return (words);
}

char	**split_create(const char *s, char c, char **tab)
{
	int		i;
	int		i2;
	int		len;

	i = 0;
	i2 = 0;
	len = 0;
	while (s[i])
	{
		while (s[i] == (const char)c && s[i])
			i++;
		while (s[i] != (const char)c && s[i])
		{
			i++;
			len++;
		}
		if (!s[i] && !len)
			break ;
		tab[i2] = ft_strsub(s, (i - len), len);
		i2++;
		len = 0;
	}
	tab[i2] = NULL;
	return (tab);
}

char	**ft_strsplit(const char *s, char c)
{
	int		i;
	int		i2;
	int		len;
	char	**tab;

	i = 0;
	i2 = 0;
	len = 0;
	if (!s)
		return (NULL);
	tab = (char**)malloc(sizeof(char*) * (word_count(s, c) + 1));
	if (!tab)
		return (NULL);
	tab = split_create(s, c, tab);
	return (tab);
}
