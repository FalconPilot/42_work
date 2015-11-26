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

#include <libft.h>
#include <stdio.h>
#include <string.h>

void	bzero_string(void *str, size_t empty, void (*f)(void*, size_t))
{
	int				i;
	int				len;
	unsigned char	*buf;

	i = 0;
	buf = str;
	len = strlen((const char*)buf);
	f(buf, empty);
	while (i <= len)
	{
		(buf[i] ? printf(" %c|", buf[i]) : printf("\\0|"));
		i++;
	}
	printf("\n");
	free(buf);
}

char	*strnew(char *str)
{
	int		i;
	char	*ret;

	i = 0;
	ret = malloc(sizeof(char) * strlen(str) + 1);
	while (str[i])
	{
		ret[i] = str[i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}

int		bzero_op(char *test, size_t empty)
{
	int		diff;
	int		len;
	char	*s1;
	char	*s2;

	len = strlen(test);
	printf("Input : \"%s\", %lu bits à vider\n", test, empty);
	printf("      ");
	while (len >= 0)
	{
		printf("[%lu]", (strlen(test) - len + 1));
		len--;
	}
	printf("\n");
	printf("[R] : ");
	bzero_string(strnew(test), empty, ft_bzero);
	printf("[E] : ");
	bzero_string(strnew(test), empty, bzero);
	printf("\n");
	s1 = strnew(test);
	s2 = strnew(test);
	diff = memcmp(s1, s2, strlen(test));
	free(s1);
	free(s2);
	return (diff);
}

int		test_bzero()
{
	int		i;
	int		diff;

	i = 0;
	diff = 0;
	printf("---Function #02 : ft_bzero---\n\n");
	diff += bzero_op("Coucou", 2);
	diff += bzero_op("Cacamou", 10);
	return (diff);
}
