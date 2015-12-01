/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpallies <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 08:22:28 by rpallies          #+#    #+#             */
/*   Updated: 2015/11/26 12:08:08 by rpallies         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	putnbr_loop(int n, int len)
{
	ft_putchar((n / len) % 10 + 48);
	if (len > 9)
		putnbr_loop(n, len / 10);
}

void	ft_putnbr(int n)
{
	int		len;
	int		tmp;
	
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		return ;
	}
	len = 1;
	if (n < 0)
	{
		n *= -1;
		ft_putchar('-');
	}
	tmp = n;
	while (tmp > 9)
	{
		tmp /= 10;
		len *= 10;
	}
	putnbr_loop(n, len);
}
