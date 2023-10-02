#include <stdio.h>
#include <stdlib.h>

/**
 * main - adding positive number.
 * @argc: counting arguments
 * @argv: argument
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int k, m, sum = 0;
	char *flag;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (k = 1; argv[k]; k++)
	{
		m = strtol(argv[k], &flag, 10);
		if (*flag)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += m;
		}
	}
	printf("%d\n", sum);

	return (0);
}
