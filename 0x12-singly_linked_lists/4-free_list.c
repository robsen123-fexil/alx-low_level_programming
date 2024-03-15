#include <stdio.h>
#include "lists.h"

/**
 * free_list - free elements of linked list
 * @head: node
 * Return: nothing
 */
void free_list(list_t *head)
{
list_t *free_node;

while ((free_node = head) != NULL)
{
head = head->next;
free(free_node->str);
free(free_node);
}
}
