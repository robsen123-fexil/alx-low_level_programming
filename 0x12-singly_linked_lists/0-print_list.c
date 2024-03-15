#include <stdio.h>
#include "lists.h"

/**
 * print_list - print element of linked list
 * @h: node of the linked list
 * Return: element
 */
size_t print_list(const list_t *h)
{
size_t element;

element = 1;
if (h == NULL)
{
	return (0);
}
while (h->next != NULL)
{
	if (h->str == NULL)
	{
		printf("[%d] %s\n", 0, "(nil)");
	} else
	{
		printf("[%lu] %s\n", h->len, h->str);
	}
	h = h->next;
	element += 1;
}
printf("[%lu] %s\n", h->len, h->str);
return (element);
}
