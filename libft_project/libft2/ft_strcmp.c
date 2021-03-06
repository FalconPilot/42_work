/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpallies <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 14:15:37 by rpallies          #+#    #+#             */
/*   Updated: 2015/11/26 08:38:39 by rpallies         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *s1, const char *s2)
{
	int		i;
	int		ret;

	i = 0;
	ret = 0;
	while (s1[i])
	{
		ret += (unsigned char)s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		ret -= (unsigned char)s2[i];
		i++;
	}
	return (ret);
}
