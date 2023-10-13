#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - prints contents of a list
 * @h: points to first node
 * @idx: index
 * @n: contents of new node
 *
 *Return: Address of the new node, NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp;
	dlistint_t *new;
	unsigned int check = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	temp = *h;
	while (temp && check != idx)
	{
		temp = temp->next;
		check++;
	}
	if (temp == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	if (temp == *h)
	{
		new->next = *h;
		new->prev = NULL;
		*h = new;
	}
	else
	{
		new->next = temp;
		temp->prev->next = new;
		new->prev = temp->prev;
		temp->prev = new;
	}
	return (new);
}
