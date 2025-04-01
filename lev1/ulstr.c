#include <unistd.h>

int main(int argc, char **argv)
{
	char	tmp;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (*argv[1])
	{
		if (*argv[1] >= 'a' && *argv[1] <= 'z')
		{
			tmp = *argv[1] - ('a' - 'A');
			write(1, &tmp, 1);
		}
		else if (*argv[1] >= 'A' && *argv[1] <= 'Z')
		{
			tmp = *argv[1] + ('a' - 'A');
			write(1, &tmp, 1);
		}
		else
			write(1, argv[1], 1);
		argv[1]++;
	}
	write(1, "\n", 1);
	return (0);
}
