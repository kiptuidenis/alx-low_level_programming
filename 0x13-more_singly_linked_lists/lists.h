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

size_t print_listint(const listint_t *h);
int _putchar(char c);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint_t(listint_t *head);
void free_listint2(listint_t **head);
int pop_listint(listint_t **head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
int sum_listint(listint_t *head);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);

#include "0-print_listint.c"
#include "1-listint_len.c"
#include "2-add_nodeint.c"
#include "3-add_nodeint_end.c"
#include "4-free_listint.c"
#include "5-free_listint2.c"
#include "6-pop_listint.c"
#include "7-get_nodeint.c"
#include "8-sum_listint.c"
#include "9-insert_nodeint.c"

#endif
