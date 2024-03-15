#include <stdio.h>
#include "lists.h"

/**
 * add_node - add elements in the node of beginning
 * @head: node
 * @str: elements that was inserted in the node
 * Return: starting address of the list
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *node_new;
size_t length_node;

length_node = 0;
if (str == NULL)
{
length_node = 0;
}
while (str[length_node] != '\0')
{
length_node++;
}
node_new = malloc(sizeof(list_t));
if (node_new == NULL)
{
return (NULL);
}
if (*head == NULL)
{
node_new->next = NULL;
}
else
{
node_new->next = *head;
}
node_new->str = strdup(str);
node_new->len = length_node;
*head = node_new;
return (*head);
}
