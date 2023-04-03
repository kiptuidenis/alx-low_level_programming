#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position in a
 
 *                            listint_t linked list
 * @head: Pointer to a pointer to the head of the list
 * @idx: The index of the list where the new node should be added.
 * @n: The integer value to be stored in the new node
 *
 * Return: The address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *prev_node, *current_node;
	unsigned int i;

	/* Create a new node with the given value */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	/* Insert the new node at the head of the list */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	 /* Insert the new node at a position other than the head of the list */
	prev_node = NULL;
	current_node = *head;
	for (i = 0; i < idx; i++)
	{
		if (current_node == NULL)
		{
			free(new_node);
			return (NULL);
		}

		prev_node = current_node;
		current_node = current_node->next;
	}
	new_node->next = current_node;
	prev_node->next = new_node;

	return (new_node);
}
