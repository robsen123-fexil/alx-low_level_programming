#include <stdio.h>
#include <stdlib.h>

/**
 * main - multipling two number.
 * @argc: counting argument
 * @argv: argument
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int k, m;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	k = atoi(argv[1]);
	m = atoi(argv[2]);
	printf("%d\n", k * m);

	return (0);
}