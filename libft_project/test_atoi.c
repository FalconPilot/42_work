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

#include <stdio.h>
#include <stdlib.h>
#include <libft.h>

int		is_diff(char *s)
{
	return (ft_atoi(s) != atoi(s));
}

int		test_atoi()
{
	int		diff;

	diff = 0;
	printf("---Function #01 : ft_atoi---\n\n");
	printf("Input : 01234567890\n");
	printf("[R] : %d\n[E] : %d\n\n", ft_atoi("01234567890"), atoi("01234567890"));
	diff += is_diff("01234567890");
	printf("Input : 111bla\n");
	printf("[R] : %d\n[E] : %d\n\n", ft_atoi("111bla"), atoi("111bla"));
	printf("Input : -5Ab...\n");
	printf("[R] : %d\n[E] : %d\n\n", ft_atoi("-5Ab..."), atoi("-5Ab..."));
	printf("Input :    97 8\n");
	printf("[R] : %d\n[E] : %d\n\n", ft_atoi("   97 8"), atoi("   97 8"));
	printf("Input :  -550\n");
	printf("[R] : %d\n[E] : %d\n\n", ft_atoi(" -550"), atoi(" -550"));
	printf("Input : Coucou :D\n");
	printf("[R] : %d\n[E] : %d\n\n", ft_atoi("Coucou :D"), atoi("Coucou :D"));
	printf("Input : abc13\n");
	printf("[R] : %d\n[E] : %d\n\n", ft_atoi("abc13"), atoi("abc13"));
	printf("Input : \'\\200\'\n");
	printf("[R] : %d\n[E] : %d\n\n", ft_atoi("\200"), atoi("\200"));
	return (diff);
}
