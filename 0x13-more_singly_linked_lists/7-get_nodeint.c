#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *get_nodeint_at_index - gets the nth node of a list
 *@head: head of list
 *@index: index of the node to be sought, starting at 0
 *
 *Return: pointer to nth node, NULL if it doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	i = 0;
	temp = head;
	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}
	
	if (temp == NULL)
		return (NULL);

	return (temp);
}
