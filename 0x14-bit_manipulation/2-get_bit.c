#include <stdio.h>
#include "main.h"

/**
 * get_bit - function that returns value of a bit at given index.
 * where index is the index, starting from 0 of the bit you want to get
 * @index: value for binary numbers
 * @n: value of int
 * Return: value of the bit index index or -1 if error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int numbers;

	if (n == 0 && index < 64)
		return (0);

	for (numbers = 0; numbers <= 63; n >>= 1, numbers++)
	{
		if (index == numbers)
		{
			return (n & 1);
		}
	}
	return (-1);
}
