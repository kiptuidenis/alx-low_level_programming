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
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int check = 0;

	if (*head == NULL)
		return (-1);

	temp = *head;
	while (temp && check != index)
	{
		temp = temp->next;
		check++;
	}
	if (temp == NULL)
		return (-1);
	if (temp == *head && temp->next != NULL)
	{
		*head = temp->next;
		temp->next->prev = NULL;
		free(temp);
		return (1);
	}
	if (temp->next == NULL && temp->prev == NULL)
	{
		free(temp);
		return (1);
	}
	if (temp->next == NULL && temp->prev != NULL)
	{
		temp->prev->next = NULL;
		free(temp);
		return (1);
	}
	else
	{
		temp->prev->next = temp->next;
		temp->next->prev = temp->prev;
		free(temp);
		return (1);
	}
}
