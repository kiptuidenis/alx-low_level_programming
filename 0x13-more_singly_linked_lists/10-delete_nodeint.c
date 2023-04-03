#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a linked list
 * @head: pointer to the head of the list
 * @index: index of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current = *head;

	for (i = 0; current && i < index -1; i++) /* traverse to the (index-1)th
						     node */
	{
		current = current->next;
	}


    if (current == NULL || current->next == NULL)  /* index is greater than the
						      number of nodes */
	    return (-1);

    temp = current->next; /* delete the node */
    current->next = temp->next;
    free(temp);

    return (1);
}
