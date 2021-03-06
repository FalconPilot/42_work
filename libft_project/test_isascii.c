/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpallies <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 07:52:41 by rpallies          #+#    #+#             */
/*   Updated: 2015/11/26 10:01:23 by rpallies         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <libft.h>

int		test_isascii(void)
{
	int		test;
	int		diff;
	int		val;

	test = -24;
	diff = 0;
	printf("---Function #05 : ft_isascii---\n\n");
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
