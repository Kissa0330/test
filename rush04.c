void	ft_putchar(char w);
void	hor_side(int x);
void	ver_side(int x, int y);
void	ver_side0(int y);
int		g_i = 0;
int		g_j = 0;
char	g_w1 = 'A';
char	g_w2 = 'B';
char	g_w3 = 'C';
char	g_w4 = ' ';
char	g_w5 = '\n';

int	rush(int x, int y)
{
	// 何も描写しない時
	if (x < 1 || y < 1)
		return (0);

	// 上辺の描写
	ft_putchar(g_w1);
	hor_side(x);
	if (x > 1)
		ft_putchar(g_w3);
	ft_putchar(g_w5);


	// 縦長の時
	if (x == 1)
		ver_side0(y);
	else
		ver_side(x, y);
	if (y > 1)
	{
		ft_putchar(g_w3);
		hor_side(x);
	}
	if (x > 1 && y > 1)
		ft_putchar(g_w1);
	return (0);
}

// 横の辺
void	hor_side(int x)
{
	g_i = 2;
	while (g_i < x)
	{
		g_i++;
		ft_putchar(g_w2);
	}
}

// 縦の辺
void	ver_side(int x, int y)
{
	// AとCの部分を引くためにg_iは2
	g_i = 2;
	while (g_i < y)
	{
		g_i++;
		ft_putchar(g_w2);
		g_j = 2;
		while (g_j < x)
		{
			// 空白の描写
			g_j++;
			ft_putchar(g_w4);
		}
		ft_putchar(g_w2);
		ft_putchar(g_w5);
	}
}

// x=1の描写
void	ver_side0(int y)
{
	g_i = 2;
	while (g_i < y)
	{
		g_i++;
		ft_putchar(g_w2);
		ft_putchar(g_w5);
	}
}
