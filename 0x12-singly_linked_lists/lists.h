#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct list_s - linked list
 * @len: size_t
 * @str: value of char
 * @next: pointer for next node
 * single linked list
 */
typedef struct list_s
{
char *str;
size_t len;
struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
int _putchar(char c);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void __attribute__ ((constructor)) before_main_function();

#endif
