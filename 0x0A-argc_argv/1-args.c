#include <stdio.h>

/**
 * main - print numbers of argument that  pass to it.
 * @argc: counting arguments
 * @argv: argument
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
