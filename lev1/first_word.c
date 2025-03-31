#include <unistd.h>

int	main(int argc, char **argv)
{
	int		pos;
	int		start;
	char	output;	
	
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	pos = 0;
	while (argv[1][pos] == ' ')
		pos++;
	if (argv[1][pos] == '\0')
	{
		write(1, "\n", 1);
		return (0);
	}
	start = pos;
	while (argv[1][pos] != ' ')
		pos++;
	while (start < pos)
	{
		output = argv[1][start];
		write(1, &output, 1);
		start++;
	}
	write(1, "\n", 1);
	return (0);
}