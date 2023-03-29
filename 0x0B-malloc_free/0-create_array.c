#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <stddef.h>


/**
 *create_array - creates an array of characters
 *@size: size of array
 *@c: characters
 *Return: concatinated string
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptr = (char *) malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
