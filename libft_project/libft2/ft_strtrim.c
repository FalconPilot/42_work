/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpallies <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 14:10:22 by rpallies          #+#    #+#             */
/*   Updated: 2015/12/04 14:19:52 by rpallies         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		is_blank(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

int		detect_blanks(const char *s)
{
	int		i;

	i = 0;
	while (is_blank(s[i]) && s[i])
		i++;
	return (i);
}

char	*ft_strtrim(const char *s)
{
	int			i;
	int			b;
	int			len;
	char		*copy;

	b = detect_blanks(s);
	len = 0;
	i = b;
	while (s[i])
	{
		len++;
		i++;
	}
	i--;
	while (is_blank(s[i]) && len > 0)
	{
		len--;
		i--;
	}
	copy = (char*)malloc(sizeof(char) * (len + 1));
	if (!copy)
		return (NULL);
	copy = ft_memcpy(copy, (char*)s + b, len);
	copy[len] = '\0';
	return (copy);
}
