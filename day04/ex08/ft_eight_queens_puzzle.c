#include <stdio.h>

int	diag(int board[][8], int row, int col)
{
	int	f;

	f = 1;
	while (row - f >= 0)
	{
		if (col - f >= 0)
		{
			if (board[row - f][col - f])
				return (0);
		}
		if (col + f < 8)
		{
			if (board[row - f][col + f])
				return (0);
		}
		f++;
	}
	return (1);
}

int	queen(int board[][8], int row)
{
	int	c;
	int	r;
	int	i;

	c = 0;
	r = 0;
	i = 0;
	if (row == 8)
		return (1);
	while (r <= row)
	{
		board[row][c] = 1;
		if ((board[r][c] || !diag(board, row, c)) && r != row)
		{
			board[row][c] = 0;
			c++;
			r = 0;
			if (c == 8)
				break ;
		}
		else
			i += queen(board, row + 1);
		board[row][c] = 0;
		r++;
	}
	return (i);
}

int	ft_eight_queens_puzzle(void)
{
	int	i;
	int	b[8][8];
	int	x;
	int	y;

	x = 0;
	while (x < 8)
	{
		y = 0;
		while (y < 8)
		{
			b[x][y] = 0;
			y++;
		}
		x++;
	}
	i = queen(b, 0);
	return (i);
}

int	main()
{
	printf("%d\n", ft_eight_queens_puzzle());
	return (0);
}

// INCOMPLETE
