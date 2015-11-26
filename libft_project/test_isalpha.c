/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpallies <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 07:52:26 by rpallies          #+#    #+#             */
/*   Updated: 2015/11/26 08:17:58 by rpallies         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <libft.h>

int		diff_alpha(char test, char target)
{
	int		val;
	int		diff;

	diff = 0;
	while (test <= target)
	{
		printf("Input : %c\n", test);
		printf("[R] : %d\n[E] : %d\n\n", ft_isalpha(test), isalpha(test));
		val = ((ft_isalpha(test)) ? 1 : 0);
		diff += (isalpha(test) != val ? 1 : 0);
		test++;
	}
	return (diff);
}

int		test_isalpha(void)
{
	int		test;
	int		diff;

	test = '0';
	diff = 0;
	printf("---Function #04 : ft_isalpha---\n\n");
	printf("For this function, in case of a non-null expected result, ");
	printf("any non-null result is admited\n\n");
	diff += diff_alpha('0', '9');
	diff += diff_alpha('A', 'Z');
	diff += diff_alpha('a', 'z');
	printf("Input : \"\\200\"\n");
	printf("[R] : \"%d\"\n[E] : \"%d\"\n\n", ft_isalpha(200), isalpha(200));
	if (ft_isalpha(200) > 0)
		diff++;
	printf("Input : \"\\13\"\n");
	printf("[R] : \"%d\"\n[E] : \"%d\"\n\n", ft_isalpha(13), isalpha(13));
	if (ft_isalpha(13) > 0)
		diff++;
	return (diff);
}
