/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpallies <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 12:49:02 by rpallies          #+#    #+#             */
/*   Updated: 2015/11/26 13:35:57 by rpallies         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>
#include <string.h>

int		strncat_op(char *s1, char *s2, size_t n, size_t swap)
{
	char	*str1;
	char	*str2;

	str1 = malloc(sizeof(char) * n);
	str2 = malloc(sizeof(char) * n);
	str1 = strcpy(str1, s1);
	str2 = strcpy(str2, s2);
	str1 = ft_strncat(str1, str2, swap);
	str2 = strncat(str1, str2, swap);
	printf("Input : %s + %s, (size = %lu), (change = %lu)\n", s1, s2, n, swap);
	printf("[R] : %s\n[E] : %s\n\n", str1, str2);
	return (strcmp(str1, str2));
}

int		test_strncat(void)
{
	int		diff;

	diff = 0;
	diff += strncat_op("Camel", "debbiche", 30, 2);
	diff += strncat_op("Look", "atme", 5, 4);
	return (diff);
}
