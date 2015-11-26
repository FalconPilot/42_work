/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpallies <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 09:12:59 by rpallies          #+#    #+#             */
/*   Updated: 2015/11/26 09:14:02 by rpallies         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <libft.h>

int		test_isprint(void)
{
	int		test;
	int		diff;
	int		val;

	test = -24;
	diff = 0;
	printf("---Function #07 : ft_isprint---\n\n");
	printf("For this function, in case of a non-null expected result, ");
	printf("any non-null result is admited\n\n");
	while (test < 150)
	{
		printf("Input : \\%d\n", test);
		printf("[R] : %d\n[E] : %d\n\n", ft_isprint(test), isprint(test));
		val = ((ft_isprint(test)) ? 1 : 0);
		diff = ((val != isprint(test)));
		test++;
	}
	return (diff);
}
