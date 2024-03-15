#include <stdio.h>
#include "lists.h"

/**
 * listint_len - count and return number of elements
 * @h: variable of linked list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t counter;

	counter = 1;
	if (h == NULL)
	{
		return (0);
	}
	while (h->next != NULL)
	{
		if (h->n == '\0')
		{
			continue;
		}
		counter++;
		h = h->next;
	}
	return (counter);
}
