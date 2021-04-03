#include <unistd.h>

void	put_all_numbers(char c1, char c2, char d1, char d2)
{
	ft_putchar(c1);
	ft_putchar(c2);
	ft_putchar(' ');
	ft_putchar(d1);
	ft_putchar(d2);
}

void	inner_loop(char c1, char c2)
{
	char	d1;
	char	d2;

	d1 = c1;
	d2 = c2 + 1;
	if (d2 > '9')
	{
		d2 = '0';
		d1++;
	}
	while (d1 <= '9')
	{
		while (d2 <= '9')
		{
			put_all_numbers(c1, c2, d1, d2);
			if (c1 == '9' && c2 == '8')
				return ;
			ft_putchar(',');
			ft_putchar(' ');
			d2++;
		}
		d2 = '0';
		d1++;
	}
}

void	ft_print_comb2(void)
{
	char	c1;
	char	c2;

	c1 = '0';

	while (c1 <= '9')
	{
		c2 = '0';
		while (c2 <= '9')
		{
			inner_loop(c1, c2);
			c2++;
		}
		c2 = '0';
		c1++;
	}
}
