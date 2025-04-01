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

// #include <stdio.h>

// int main(int argc, char **argv)
// {
// 	int	len;

// 	len = ft_strlen(argv[1]);
// 	printf("%d\n", len);
// 	return (0);
// }
