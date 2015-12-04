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
	if (n < 0)
		n *= -1;
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

void	begin_filling(char *str, int n, int len)
{
	int		i;

	i = 0;
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
		i++;
	}
	fill_str(str, n, int_len(n, 1), i);
	str[len] = '\0';
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;

	if (n == -2147483648)
	{
		str = ft_memalloc(12);
		str = ft_strcpy(str, "-2147483648\0");
		if (!str)
			return (NULL);
		return (str);
	}
	len = int_len(n, 0) + (n < 0 ? 1 : 0);
	str = ft_memalloc(len + 1);
	if (!str)
		return (NULL);
	begin_filling(str, n, len);
	return (str);
}
