#include <stdio.h>
#include "main.h"

/**
 * set_bit - function that sets value of a bit to 1 at given index
 * where index is the index, starting from 0 of the bit you want to get
 * @index: value for binary numbers
 * @n: value of int
 * Return: value of the bit index index or -1 if error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	*n |= (1 << index);
	return (1);
}
