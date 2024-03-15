#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - add elements in the node of end
 * @head: node
 * @str: elements that was inserted in the node
 * Return: starting address of the list
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *node_new, *temp;
size_t length_node;

length_node = 0;
while (str[length_node] != '\0')
{
length_node++;
}
node_new = malloc(sizeof(list_t));
if (node_new == NULL)
{
return (NULL);
}
node_new->str = strdup(str);
node_new->len = length_node;
node_new->next = NULL;
if (*head == NULL)
{
*head = node_new;

}
else
{
temp = *head;
while (temp->next != NULL)
{
	temp = temp->next;
}
temp->next = node_new;
}
return (*head);
}
