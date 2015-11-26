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

int		diff_alnum(char test, char target)
{
	int		val;
	int		diff;

	diff = 0;
	while (test <= target)
	{
		printf("Input : %c\n", test);
		printf("[R] : %d\n[E] : %d\n\n", ft_isalnum(test), isalnum(test));
		val = ((ft_isalnum(test)) ? 1 : 0);
		diff += (isalnum(test) != val ? 1 : 0);
		test++;
	}
	return (diff);
}

int		test_isalnum()
{
	int		test;
	int		diff;

	test = '0';
	diff = 0;
	printf("---Function #03 : ft_isalnum---\n\n");
	printf("For this function, in case of a non-null expected result, ");
	printf("any non-null result is admited\n\n");
	diff += diff_alnum('0', '9');
	diff += diff_alnum('A', 'Z');
	diff += diff_alnum('a', 'z');
	printf("Input : \"\\200\"\n");
	printf("[R] : \"%d\"\n[E] : \"%d\"\n\n", ft_isalnum(200), isalnum(200));
	if (ft_isalnum(200) > 0)
		diff++;
	printf("Input : \"\\13\"\n");
	printf("[R] : \"%d\"\n[E] : \"%d\"\n\n", ft_isalnum(13), isalnum(13));
	if (ft_isalnum(13) > 0)
		diff++;
	return (diff);
}
