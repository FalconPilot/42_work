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
#include <stdlib.h>
#include <strings.h>

#include <libft.h>

/*
 * ft_atoi				ID[01]
 */

void	test_atoi()
{
	printf("---Function #01 : ft_atoi---\n\n");
	printf("Input : \"01234567890\"\n");
	printf("[R] : \"%d\"\n[E] : \"%d\"\n\n", ft_atoi("01234567890"), atoi("01234567890"));
	printf("Input : \"111bla\"\n");
	printf("[R] : \"%d\"\n[E] : \"%d\"\n\n", ft_atoi("111bla"), atoi("111bla"));
	printf("Input : \"-5Ab...\"\n");
	printf("[R] : \"%d\"\n[E] : \"%d\"\n\n", ft_atoi("-5Ab..."), atoi("-5Ab..."));
	printf("Input : \"   97 8\"\n");
	printf("[R] : \"%d\"\n[E] : \"%d\"\n\n", ft_atoi("   97 8"), atoi("   97 8"));
	printf("Input : \" -550\"\n");
	printf("[R] : \"%d\"\n[E] : \"%d\"\n\n", ft_atoi(" -550"), atoi(" -550"));
	printf("Input : \"Coucou :D\"\n");
	printf("[R] : \"%d\"\n[E] : \"%d\"\n\n", ft_atoi("Coucou :D"), atoi("Coucou :D"));
	printf("Input : \"abc13\"\n");
	printf("[R] : \"%d\"\n[E] : \"%d\"\n\n", ft_atoi("abc13"), atoi("abc13"));
	printf("Input : \'\\200\'\n");
	printf("[R] : \"%d\"\n[E] : \"%d\"\n\n", ft_atoi("\200"), atoi("\200"));
}

/*
 * ft_bzero				ID[02]
 */

void	bzero_string(void *str, size_t empty, int func)
{
	int				i;
	int				len;
	unsigned char	*buf;

	i = 0;
	len = 0;
	buf = str;
	while (buf[len])
		len++;
	if (func == 1)
		ft_bzero(str, empty);
	else
		bzero(str, empty);
	while (i <= len)
	{
		if (buf[i])
			printf(" %c|", buf[i]);
		else
			printf("\\0|");
		i++;
	}
	printf("\n");
}

void	test_bzero()

{
	int		i;
	char	*str;

	i = 0;
	printf("---Function #01 : ft_atoi---\n\n");
	printf("");
	printf("Input : \"Coucou\"\n");
	printf("      [1][2][3][4][5][6][7]\n");
	printf("[R] : ");
	str = malloc(sizeof(char) * 7);
	str = strcpy(str, "Coucou");
	bzero_string(str, 2, 1);
	printf("[E] : ");
	free(str);
	str = malloc(sizeof(char) * 7);
	str = strcpy(str, "Coucou");
	bzero_string(str, 2, 2);
	free(str);
}

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
		if (ft_isalnum(test) == 0 && isalnum(test) != 0)
			ret++;
		else if (ft_isalnum(test) != 0 && isalnum(test) == 0)
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
	printf("TOTAL DIFFERENCES : %d\n", diff);
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
	printf("\nTesting acronyms\n[R] = Result, [E] = Expected\n\n");
	switch(funcid)
	{
		case 1: test_atoi(); break;
		case 2: test_bzero(); break;
		case 3: test_isalnum(); break;
		case 4: test_isalpha(); break;
		case 5: test_isascii(); break;
		case 6: test_isdigit(); break;
		default: printf("#Err[01] : Invalid function ID\n");
	}
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
