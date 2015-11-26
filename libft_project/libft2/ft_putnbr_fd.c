/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpallies <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 08:22:33 by rpallies          #+#    #+#             */
/*   Updated: 2015/11/26 08:22:34 by rpallies         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	putnbr_loop(int n, int len, int fd)
{
	ft_putchar_fd((n / len) % 10 + 48, fd);
	if (len > 9)
		putnbr_loop(n, len / 10, fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	int		len;
	int		tmp;

	len = 1;
	if (n < 0)
	{
		n *= -1;
		ft_putchar_fd('-', fd);
	}
	tmp = n;
	while (tmp > 9)
	{
		tmp /= 10;
		len *= 10;
	}
	putnbr_loop(n, len, fd);
}
