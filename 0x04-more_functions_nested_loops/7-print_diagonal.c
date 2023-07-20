#include "main.h"

/**
 * print_diagonal - print space between the character
 * @n: value of space
*/
void print_diagonal(int n)
{
	int i;
	int x;

	if (n <= 0)
	{
		_putchar("\n");
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
					_putchar('\\');
				else if (j < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
