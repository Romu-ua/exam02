#include <unistd.h>

int	main(int argc, char **argv)
{
	int		len;
	char	*str;
	int		i;

	if (argc != 2)
		return (0);
	str = argv[1];
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			i = 0;
			while (i <= *str - 'a')
			{
				write(1, str, 1);
				i++;
			}
		}
		else if (*str >= 'A' && *str <= 'Z')
		{
			i = 0;
			while (i <= *str - 'A')
			{
				write(1, str, 1);
				i++;
			}
		}
		else
			write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}
