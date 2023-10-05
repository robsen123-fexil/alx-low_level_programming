#include <stdlib.h>
#include "main.h"

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int w = 0,  x = 0, leni = 0, lenj = 0;

	while (s1 && s1[leni])
		leni++;
	while (s2 && s2[lenj])
		lenj++;

	s3 = malloc(sizeof(char) * (leni + lenj + 1));
	if (s3 == NULL)
		return (NULL);

	w = 0;
	x = 0;

	if (s1)
	{
		while (w < leni)
		{
			s3[w] = s1[w];
			w++;
		}
	}

	if (s2)
	{
		while (w < (leni + lenj))
		{
			s3[w] = s2[x];
			w++;
			x++;
		}
	}
	s3[w] = '\0';

	return (s3);
}
