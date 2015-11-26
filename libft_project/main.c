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

int		exall()
{
	int		diff;

	diff = 0;
	diff += test_atoi();
	diff += test_bzero();
	diff += test_isalnum();
	diff += test_isalpha();
	diff += test_isascii();
	diff += test_isdigit();
	return (diff);
}

void	parser(int funcid)
{
	int		diff;

	diff = 0;
	printf("\nTesting acronyms\n[R] = Result, [E] = Expected\n\n");
	switch(funcid)
	{
		case 0: diff += exall(); break;
		case 1: diff += test_atoi(); break;
		case 2: diff += test_bzero(); break;
		case 3: diff += test_isalnum(); break;
		case 4: diff += test_isalpha(); break;
		case 5: diff += test_isascii(); break;
		case 6: diff += test_isdigit(); break;
		default: printf("#Err[01] : Invalid function ID\n"); return; break;
	}
	printf("TOTAL DIFFERENCES : %d\n", diff);
}

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
