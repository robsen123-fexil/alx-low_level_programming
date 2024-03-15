#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: head of a list.
 * Return: pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev;
listint_t *Next_node;

prev = NULL;
Next_node = NULL;
while (*head != NULL)
{
	Next_node = (*head)->next;
	(*head)->next = prev;
	prev = *head;
	*head = Next_node;
}
*head = prev;
return (*head);
}
