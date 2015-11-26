/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpallies <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 09:00:54 by rpallies          #+#    #+#             */
/*   Updated: 2015/11/26 12:01:56 by rpallies         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		int_len(int n, int func)
{
	int		len;

	len = 1;
	while (n > 9)
	{
		n /= 10;
		(func ? len *= 10 : len++);
	}
	return (len);
}

void	fill_str(char *str, int n, int size, int i)
{
	str[i] = ((n / size) % 10 + 48);
	if (size > 9)
		fill_str(str, n, size / 10, i + 1);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;

	len = int_len(n, 0);
	str = malloc(sizeof(char) * len + 1);
	fill_str(str, n, int_len(n, 1), 0);
	return (str);
}
