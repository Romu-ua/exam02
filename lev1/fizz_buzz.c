#include <unistd.h>

void	ft_putnbr(int n);

int main(void)
{
	int	i;

	i = 0;
	while (i <= 100)
	{
		if (i % 15 == 0) 
			write(1, "fizzbuzz\n", 9);
		else if (i % 3 == 0)
			write(1, "fizz\n", 5);
		else if (i % 5 == 0)
			write(1, "buzz\n", 5);
		else
		{
			ft_putnbr(i);
			write(1, "\n", 1);
		}
		i++;
	}

	return (0);
}

void	ft_putnbr(int n)
{
	char	c;

	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	else if (n > 10)
		ft_putnbr(n / 10);
	c = '0' + n % 10;
	write(1, &c, 1);
	return ;
}