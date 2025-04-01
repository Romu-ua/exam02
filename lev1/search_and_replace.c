#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str);

int main(int argc, char **argv)
{
	char	*first;
	char	secound;
	char	third;

	first = argv[1];
	secound = *argv[2];
	third = *argv[3];
	if (argc != 4 
		|| ft_strlen(argv[2]) != 1 
		|| ft_strlen(argv[3]) != 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (*first)
	{
		if (*first == secound)
			write(1, &third, 1);
		else
			write(1, first, 1);
		first++;
	}
	write(1, "\n", 1);
	return (0);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}