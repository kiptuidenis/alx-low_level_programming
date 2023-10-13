#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - prints contents of a list
 * @head: points to first node
 * @index: indexth node
 *
 *Return: nth node of a list, NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int check = 0;

	if (head == NULL)
		return (NULL);
	temp = head;

	while (temp && check != index)
	{
		temp = temp->next;
		check++;
	}
	if (temp == NULL)
		return (NULL);
	return (temp);
}
