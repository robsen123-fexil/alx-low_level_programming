#include "main.h"

/**
 * factorial - factorial of numbers
 * @n: values of the  int
 * Return: the factorials of the number
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
