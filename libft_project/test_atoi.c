/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpallies <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 07:52:06 by rpallies          #+#    #+#             */
/*   Updated: 2015/11/26 12:39:49 by rpallies         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <libft.h>

int		is_diff(char *s)
{
	return (ft_atoi(s) != atoi(s));
}

int		atoi_op(char *test)
{
	printf("Input : \"%s\"\n", test);
	printf("[R] : %d\n[E] : %d\n\n", ft_atoi(test), atoi(test));
	return (is_diff(test));
}

int		test_atoi(void)
{
	int		diff;

	diff = 0;
	printf("---Function #01 : ft_atoi---\n\n");
	diff += atoi_op("01234567890");
	diff += atoi_op("-42");
	diff += atoi_op("   150");
	diff += atoi_op("    6ba9");
	diff += atoi_op ("   +500");
	diff += atoi_op("   5  r7");
	diff += atoi_op("15-5");
	diff += atoi_op("  -42");
	diff += atoi_op("Coucou :D");
	diff += atoi_op("+5240");
	return (diff);
}
