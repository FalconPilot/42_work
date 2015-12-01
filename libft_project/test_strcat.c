/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcat.c                                      :+:      :+:    :+:   */
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

int		strcat_op(char *s1, char *s2, size_t n)
{
	char	*str1;
	char	*str2;

	str1 = malloc(sizeof(char) * n);
	str2 = malloc(sizeof(char) * n);
	str1 = strcpy(str1, s1);
	str2 = strcpy(str2, s2);
	str1 = ft_strcat(str1, str2);
	str2 = strcat(str1, str2);
	printf("Input : %s + %s, (size = %lu)\n", s1, s2, n);
	printf("[R] : %s\n[E] : %s\n\n", str1, str2);
	return (strcmp(str1, str2));
}

int		test_strcat(void)
{
	int		diff;

	diff = 0;
	printf("---Function #09 : ft_strcat---\n\n");
	diff += strcat_op("Camel", "debbiche", 30);
	diff += strcat_op("Look", "atme", 5);
	return (diff);
}
