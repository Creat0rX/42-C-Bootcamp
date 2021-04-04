int	ft_is_prime(int nb)
{
	int	i;
	int	n;

	i = 2;
	n = nb;
	if (nb < 2)
		return (0);
	while (i <= n && i != nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
		n = nb / i;
	}
	return (1);
}
