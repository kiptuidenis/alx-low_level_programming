#ifndef LISTS_H

#define LISTS_H
#include <stddef.h>
/**
 * struct listint_s - singly linked list
 *@n: integer
 *@next: points to the next node
 *
 *Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

#include "0-print_listint.c"
#include "1-listint_len.c"
#include "2-add_nodeint.c"
#include "3-add_nodeint_end.c"
size_t print_listint(const listint_t *h);
int _putchar(char c);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);

#endif
