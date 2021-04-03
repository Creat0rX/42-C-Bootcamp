#include <unistd.h>

void	ft_putstr(const char *s)
{
	while (*s)
	{
		ft_putchar(*s);
		s++;
	}
}

void	ft_altstr(char *s, int n)
{
	int	i;

	i = 1;
	s[n - 1]++;
	while (i < n)
	{
		if (s[i] > '9' || s[i] <= s[i - 1])
		{
			if (s[i] > '9')
			{
				s[i] = '0';
				s[i - 1]++;
			}
			else
				s[i] = s[i - 1] + 1;
			i = 1;
			continue ;
		}
		i++;
	}
}

void	ft_print_combn(int n)
{
	char	s[n + 1];
	int		i;

	i = 0;
	s[n] = '\0';
	s[0] = '0';
	while (++i < n)
		s[i] = s[i - 1] + 1;
	while (s[0] + n - 1 < '9')
	{
		ft_putstr(s);
		ft_altstr(s, n);
		ft_putchar(',');
		ft_putchar(' ');
	}
	ft_putstr(s);
}
