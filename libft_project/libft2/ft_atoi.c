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

int		find_it(const char *str)
{
	int		i;

	i = 0;
	while (str[i] == 32 || str[i] == 9)
		i++;
	return (i);
}

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
		if (str[i] < '0' || str[i] > '9')
			return (num * sym);
		num += (str[i] - '0');
		if (str[i + 1] && str[i + 1] >= '0' && str[i + 1] <= '9')
			num *= 10;
		i++;
	}
	return (num * sym);
}
