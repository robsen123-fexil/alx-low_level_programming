#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: variable of linked list
 * @n: value of new elements
 * Return: number of elements
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *index;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	index = *head;
	if (*head == NULL)
	{
		*head = temp;
	} else
	{
		while (index->next != NULL)
		{
			index = index->next;
		}
		index->next = temp;
	}
	temp->n = n;
	return (*head);
}
