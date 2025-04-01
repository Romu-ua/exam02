#include <unistd.h>

int	main(int argc, char **argv)
{
	char	tmp;
	int		pos;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (*argv[1])
	{
		if (*argv[1] >= 'a' && *argv[1] <= 'z')
		{
			if (*argv[1] >= 'n' && *argv[1] <= 'z')
			{
				tmp = *argv[1] - 13;
				write(1, &tmp, 1);
			}
			else
			{
				pos = 13 - (*argv[1] - 'a') - 1;
				tmp = 'z' - pos;
				write(1, &tmp, 1);
			}
		}
		else if (*argv[1] >= 'A' && *argv[1] <= 'Z')
		{
			if (*argv[1] >= 'N' && *argv[1] <= 'Z')
			{
				tmp = *argv[1] - 13;
				write(1, &tmp, 1);
			}
			else
			{
				pos = 13 - (*argv[1] - 'A') - 1;
				tmp = 'Z' - pos;
				write(1, &tmp, 1);
			}
		}
		else
		{
			write(1, argv[1], 1);
		}
		(argv[1])++;
	}
	write(1, "\n", 1);
	return (0);
}