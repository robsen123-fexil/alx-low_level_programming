#include <stdio.h>

/**
 * main - print every argument it receive.
 * @argc: countin argument
 * @argv: argument
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int k;

	for (k = 0; k < argc; k++)
		printf("%s\n", argv[k]);

	return (0);
}
