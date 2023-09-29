#include "main.h"
/**
 * _pow_recursion - calculate the x power of y
 * @x: value for variale 1
 * @y: value for the variable 2
 * Return: the value of x power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
