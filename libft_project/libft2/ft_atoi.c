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

int		index_ini(const char *str)
{
	int		i;
	
	i = 0;
	while (str[i] >= 0 && str[i] <= 32)
		i++;
	return (i);
}

int		ft_atoi(const char *str)
{
	int		i;
	int		num;
	int		sym;

	num = 0;
	sym = 0;
	i = index_ini(str);
	if (str[i] == '-')
	{
		sym = 1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] && ft_isdigit(str[i]))
	{
		num += (str[i] - '0');
		if (str[i + 1] && ft_isdigit(str[i + 1]))
			num *= 10;
		i++;
	}
	return (sym ? -num : num);
}
