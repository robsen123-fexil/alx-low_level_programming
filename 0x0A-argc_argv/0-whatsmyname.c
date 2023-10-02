#include <stdio.h>

/**
 * main - print the  name, follows a new line of code.
 * @argc: counting argument
 * @argv: argument
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}