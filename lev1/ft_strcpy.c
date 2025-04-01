char	*strcpy(char *dst, const char *src)
{
	int	i;

	i = 0;
	while (*src)
	{
		dst[i] = *src;
		i++;
		src++;
	}
	dst[i] = '\0';
	return (dst);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(int argc, char **argv)
// {
// 	char *dst;

// 	dst = (char *)malloc(sizeof(char) * 10);
// 	dst = strcpy(dst, argv[1]);
// 	printf("%s\n", dst);
//	free(dst);
// }