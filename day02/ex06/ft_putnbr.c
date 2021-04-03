#include <unistd.h>

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb < 0)
	{
		ft_putchar('2');
		nb += 2000000000;
		nb = -nb;
	}
	if (nb > 10)
		ft_putnbr(nb / 10);
	ft_putchar('0' + nb % 10);
}
