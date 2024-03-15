#include <stdio.h>
#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int constant;
	char *num;

	constant = 1;
	num = (char *) &constant;

	return ((int)*num);
}
