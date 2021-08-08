void	ft_putchar(char w);
void	hor_side(int x);
void	ver_side(int x, int y);
void	ver_side0(int y);
int		g_i = 0;
int		g_j = 0;
char	g_w1 = 'o';
char	g_w2 = '-';
char	g_w3 = 'o';
char	g_w4 = ' ';
char	g_w5 = '\n';
char	g_w6 = '|';

int	rush(int x, int y)
{
	if (x < 1 || y < 1)
		return (0);
	ft_putchar(g_w1);
	hor_side(x);
	if (x > 1)
		ft_putchar(g_w3);
	ft_putchar(g_w5);
	if (x == 1)
		ver_side0(y);
	else
		ver_side(x, y);
	ft_putchar(g_w3);
	hor_side(x);
	if (x > 1)
		ft_putchar(g_w1);
	return (0);
}

void	hor_side(int x)
{
	g_i = 2;
	while (g_i < x)
	{
		g_i++;
		ft_putchar(g_w2);
	}
}

void	ver_side(int x, int y)
{
	g_i = 2;
	while (g_i < y)
	{
		g_i++;
		ft_putchar(g_w6);
		g_j = 2;
		while (g_j < x)
		{
			g_j++;
			ft_putchar(g_w4);
		}
		ft_putchar(g_w6);
		ft_putchar(g_w5);
	}
}

void	ver_side0(int y)
{
	g_i = 2;
	while (g_i < y)
	{
		g_i++;
		ft_putchar(g_w6);
		ft_putchar(g_w5);
	}
}
