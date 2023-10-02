#include <stdio.h>
#include <stdlib.h>

/**
 * main - print  minimum numbers  coin which make change
 * from an amount of money
 * @argc: counting arguments
 * @argv: argument
 * Return: 0
 */
int main(int argc, char **argv)
{
	int tot, counts;
	unsigned int k;
	char *p;
	int cents[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	tot = strtol(argv[1], &p, 10);
	counts = 0;

	if (!*p)
	{
		while (tot > 1)
		{
			for (i = 0; i < sizeof(cents[i]); i++)
			{
				if (tot >= cents[i])
				{
					counts += tot / cents[i];
					tot = tot % cents[i];
				}
			}
		}
		if (tot == 1)
			counts++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", counts);
	return (0);
}
