#include "lists.h"
#include <stdio.h>

/**
 * free_listint_safe - frees a list
 * @h: pointer to pointer to head of list
 *
 * Returns: Returns the size of the list that was free'd
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h;
	listint_t *visited[1024] = {NULL}; /* array to store visited nodes */
	size_t size = 0, i;

	while (current != NULL)
	{
		/* check if current node has been visited before */
		for (i = 0; i < size; i++)
		{
			if (visited[i] == current)
			{
				*h = NULL; /* Set head to NULL to prevent
					      double-free*/
				printf("Error: list contains a loop\n");
				exit(98);
			}
		}

		visited[size++] = current; /* add current node to visited
					      array */
		current = current->next;
	}

	for (i = 0; i < size; i++)
	{
		free(visited[i]); /* free all visited nodes */
	}

	*h = NULL;
	return (size);
}
