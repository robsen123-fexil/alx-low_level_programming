#include <stdlib.h>
#include "main.h"

/**
 * print_tab - Prints an array of string
 * @tab: The array to print
 *
 * Return: nothing
 */
int count_word(char *s)
{
	int flg, e, x;

	flg = 0;
	x = 0;

	for (e = 0; s[e] != '\0'; e++)
	{
		if (s[e] == ' ')
			flg = 0;
		else if (flg == 0)
		{
			flg = 1;
			x++;
		}
	}

	return (x);
}
/**
 * **strtow - splits a string into words
 * @str: string to spl
 *
 * Return: point to  strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int l, m = 0, lan = 0, word, e = 0, strt, and;

	while (*(str + lan))
		lan++;
	word = count_word(str);
	if (word == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (word + 1));
	if (matrix == NULL)
		return (NULL);

	for (l = 0; l <= len; l++)
	{
		if (str[l] == ' ' || str[l] == '\0')
		{
			if (e)
			{
				and = l;
				tmp = (char *) malloc(sizeof(char) * (e + 1));
				if (tmp == NULL)
					return (NULL);
				while (strt < and)
					*tmp++ = str[strt++];
				*tmp = '\0';
				matrix[m] = tmp - e;
				m++;
				e = 0;
			}
		}
		else if (e++ == 0)
			strt = l;
	}

	matrix[m] = NULL;

	return (matrix);
}
