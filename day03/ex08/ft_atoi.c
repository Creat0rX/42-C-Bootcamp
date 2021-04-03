int	ft_atoi(char *str)
{
	int	sign;
	int	n;

	sign = 1;
	n = 0;
	while (*str == '\t' || *str == '\v' || *str == '\n' || *str == '\r' || \
			*str == '\f' || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		*str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		n *= 10;
		n += *str - '0';
		str++;
	}
	return (n * sign);
}
