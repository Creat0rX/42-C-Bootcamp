int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (i);
	nb++;
	while (i <= nb / i)
	{
		if (nb % i == 0)
		{
			i = 2;
			nb++;
		}
		else
			i++;
	}
	return (nb);
}
