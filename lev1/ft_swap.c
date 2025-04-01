void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int	a = atoi(argv[1]);
	int	b = atoi(argv[2]);

	printf("a : %d b : %d\n", a, b);
	ft_swap(&a, &b);
	printf("a : %d b : %d\n", a, b);
	return (0);
}