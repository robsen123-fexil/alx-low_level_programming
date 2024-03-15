#include "lists.h"

/**
 * free_node - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_node(listp_t **head)
{
	listp_t *temp;
	listp_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a linked list.
 * @h: head of a list.
 *
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t next_node = 0;
	listp_t *head_pointer, *new, *add;
	listint_t *current;

	head_pointer = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = head_pointer;
		head_pointer = new;

		add = head_pointer;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_node(&head_pointer);
				return (next_node);
			}
		}

		current = *h;
		*h = (*h)->next;
		free(current);
		next_node++;
	}
	*h = NULL;
	free_node(&head_pointer);
	return (next_node);
}
