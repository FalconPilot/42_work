/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpallies <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 14:40:12 by rpallies          #+#    #+#             */
/*   Updated: 2015/11/24 19:33:08 by rpallies         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <libft.h>

int		test_isascii()
{
	int		test;
	int		diff;
	int		val;

	test = -24;
	diff = 0;
	printf("---Function #5 : ft_isascii---\n\n");
	printf("For this function, in case of a non-null expected result, ");
	printf("any non-null result is admited\n\n");
	while (test < 150)
	{
		printf("Input : \\%d\n", test);
		printf("[R] : %d\n[E] : %d\n\n", ft_isascii(test), isascii(test));
		val = ((ft_isascii(test)) ? 1 : 0);
		diff = ((val != isascii(test)));
		test++;
	}
	return (diff);
}
