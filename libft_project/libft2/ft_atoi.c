/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpallies <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 17:39:29 by rpallies          #+#    #+#             */
/*   Updated: 2015/11/24 16:49:01 by rpallies         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_atoi(const char *str)
{
	int		i;
	int		num;
	int		sym;

	num = 0;
	sym = 1;
	i = 0;
	while (str[i] == 32 || str[i] == 9)
		i++;
	if (str[i] == '-')
	{
		sym *= -1;
		i++;
	}
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (num * sym);
		num += (str[i] - '0');
		if (str[i + 1] && ft_isdigit(str[i + 1]))
			num *= 10;
		i++;
	}
	return (num * sym);
}
