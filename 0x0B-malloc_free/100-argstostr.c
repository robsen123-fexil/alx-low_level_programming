#include "main.h"
#include <stdlib.h>
/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
char *argstostr(int ac, char **av)
{
	int x, y, z, siz;
	char *arg;

	siz = 0;
	z = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	x = 0;
	while (x < ac)
	{
		y = 0;
		while (av[x][y])
		{
			siz++;
			y++;
		}
		siz++;
		x++;
	}
	arg = malloc((sizeof(char) * siz) + 1);
	if (arg == NULL)
		return (NULL);
	x = 0;
	while (x < ac)
	{
		y = 0;
		while (av[x][y])
		{
			arg[z] = av[x][y];
			y++;
			z++;
		}
		arg[z] = '\n';
		z++;
		x++;
	}
	arg[z] = '\0';
	return (arg);
}
