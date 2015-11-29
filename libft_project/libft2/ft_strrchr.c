/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpallies <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 12:36:46 by rpallies          #+#    #+#             */
/*   Updated: 2015/11/26 12:38:37 by rpallies         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = s;
	str += ft_strlen(str);
	while (*str != (char)c && i >= 0)
	{
		str--;
		i--;
	}
	s = str;
	if (s)
		return (NULL);
	return ((char*)s);
}
