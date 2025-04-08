#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str);

int	main(int argc, char **argv)
{
	int	result;

	if (argc != 4 || ft_strlen(argv[2]) != 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	if (*argv[2] == '+')
	{
		result = atoi(argv[1]) + atoi(argv[3]);
		printf("%d\n", result);
	}
	else if (*argv[2] == '-')
	{
		result = atoi(argv[1]) - atoi(argv[3]);
		printf("%d\n", result);
	}
	else if (*argv[2] == '*')
	{
		result = atoi(argv[1]) * atoi(argv[3]);
		printf("%d\n", result);
	}
	else if (*argv[2] == '/')
	{
		result = atoi(argv[1]) / atoi(argv[3]);
		printf("%d\n", result);
	}
	else if (*argv[2] == '%')
	{
		result = atoi(argv[1]) % atoi(argv[3]);
		printf("%d\n", result);
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}
