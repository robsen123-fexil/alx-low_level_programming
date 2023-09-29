#include "main.h"
/**
 * _pow_recursion - calculating  the x pow of y
 * @x: value of variale 1
 * @y: value of   variable 2
 * Return:  value of x pow y
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
