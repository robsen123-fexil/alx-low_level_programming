#include "main.h"

/**
 * factorial - factorial of the numbers
 * @n: value of int
 * Return: the factorial of the numbers
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
