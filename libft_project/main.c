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

#include "testfuncs.h"
#include <ctype.h>

/*
 * ft_isalnum			ID[03]
 */

int		diff_alnum(char test, char target)
{
	int		ret;

	ret = 0;
	while (test <= target)
	{
		printf("Input : \"%c\"\n", test);
		printf("[R] : \"%d\"\n[E] : \"%d\"\n\n", ft_isalnum(test), isalnum(test));
		if (ft_isalnum(test) && !isalnum(test))
			ret++;
		else if (!ft_isalnum(test) && isalnum(test))
			ret++;
		test++;
	}
	return (ret);
}

void	test_isalnum()
{
	int		test;
	int		diff;

	test = '0';
	diff = 0;
	printf("---Function #03 : ft_isalnum---\n\n");
	printf("For this function, in case of a non-null expected result,\nany non-null result is admited\n\n");
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
}

/*
 * ft_isalpha			ID[04]
 */

int		diff_alpha(char test, char target)
{
	int		ret;

	ret = 0;
	while (test <= target)
	{
		printf("Input : \"%c\"\n", test);
		printf("[R] : \"%d\"\n[E] : \"%d\"\n\n", ft_isalpha(test), isalpha(test));
		if (ft_isalpha(test) == 0 && isalpha(test) != 0)
			ret++;
		else if (ft_isalpha(test) != 0 && isalpha(test) == 0)
			ret++;
		test++;
	}
	return (ret);
}

void	test_isalpha()
{
	int		test;
	int		diff;

	test = '0';
	diff = 0;
	printf("---Function #)$ : ft_isalpha---\n\n");
	printf("For this function, in case of a non-null expected result,\nany non-null result is admited\n\n");
	diff += diff_alpha('0', '9');
	diff += diff_alpha('A', 'Z');
	diff += diff_alpha('a', 'z');
	printf("Input : \"\\200\"\n");
	printf("[R] : \"%d\"\n[E] : \"%d\"\n\n", ft_isalpha(200), isalpha(200));
	if (ft_isalpha(test) > 0)
		diff++;
	printf("Input : \"\\13\"\n");
	printf("[R] : \"%d\"\n[E] : \"%d\"\n\n", ft_isalpha(13), isalpha(13));
	if (ft_isalpha(test) > 0)
		diff++;
	printf("TOTAL DIFFERENCES : %d\n", diff);
}

/*
 * ft_isascii			ID[05]
 */

void	test_isascii()
{
	int		test;
	int		diff;
	int		res;

	test = -24;
	diff = 0;
	printf("---Function #)$ : ft_isascii---\n\n");
	printf("For this function, in case of a non-null expected result,\nany non-null result is admited\n\n");
	while (test < 150)
	{
		printf("Input : \"\\%d\"\n", test);
		printf("[R] : \"%d\"\n[E] : \"%d\"\n\n", ft_isascii(test), isascii(test));
		res = ft_isascii(test);
		if (res > 0)
			res /= res;
		if (res != isascii(test))
			diff++;
		test++;
	}
	printf("TOTAL DIFFERENCES : %d\n", diff);
}

/*
 * ft_isdigit			ID[06]
 */

int		diff_digit(char test, char target)
{
	int		ret;

	ret = 0;
	while (test <= target)
	{
		printf("Input : \"%c\"\n", test);
		printf("[R] : \"%d\"\n[E] : \"%d\"\n\n", ft_isdigit(test), isdigit(test));
		if (ft_isdigit(test) == 0 && isdigit(test) != 0)
			ret++;
		else if (ft_isdigit(test) != 0 && isdigit(test) == 0)
			ret++;
		test++;
	}
	return (ret);
}

void	test_isdigit()
{
	int		test;
	int		diff;

	test = '0';
	diff = 0;
	printf("---Function #06 : ft_isdigit---\n\n");
	printf("For this function, in case of a non-null expected result,\nany non-null result is admited\n\n");
	diff += diff_digit('0', '9');
	diff += diff_digit('A', 'Z');
	diff += diff_digit('a', 'z');
	printf("Input : \"\\200\"\n");
	printf("[R] : \"%d\"\n[E] : \"%d\"\n\n", ft_isdigit(200), isdigit(200));
	if (ft_isdigit(200) > 0)
		diff++;
	printf("Input : \"\\13\"\n");
	printf("[R] : \"%d\"\n[E] : \"%d\"\n\n", ft_isdigit(13), isdigit(13));
	if (ft_isdigit(13) > 0)
		diff++;
	printf("TOTAL DIFFERENCES : %d\n", diff);
}

/*
 * function parser
 */

void	parser(int funcid)
{
	int		diff;

	diff = 0;
	printf("\nTesting acronyms\n[R] = Result, [E] = Expected\n\n");
	switch(funcid)
	{
		case 1: diff += test_atoi(); break;
		case 2: test_bzero(); break;
		case 3: test_isalnum(); break;
		case 4: test_isalpha(); break;
		case 5: test_isascii(); break;
		case 6: test_isdigit(); break;
		default: printf("#Err[01] : Invalid function ID\n");
	}
	printf("TOTAL DIFFERENCES : %d\n", diff);
}

/*
 * main routine
 */

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("#Err[00] : Wrong argument count (1 expected)\n");
		return (1);
	}
	parser(atoi(argv[1]));
	return (0);
}
