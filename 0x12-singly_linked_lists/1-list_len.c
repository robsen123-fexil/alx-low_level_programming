#include <stdio.h>
#include "lists.h"

/**
 * list_len - function that return the number of elements
 * @h: node of the linked list
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count_node_elements;

	count_node_elements = 1;
	if (h == NULL)
	{
		return (0);
	}
	while (h->next != NULL)
	{
		h = h->next;
		count_node_elements += 1;
	}
	return (count_node_elements);
}
