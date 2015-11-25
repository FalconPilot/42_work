

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
