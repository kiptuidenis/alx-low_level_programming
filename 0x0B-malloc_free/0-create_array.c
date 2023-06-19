#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - creates an array of chars
 *@size: size of array
 *@c: character
 *
 *Return: NULL if size = 0 or fails or pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *chars;
	unsigned int i;

	if (size == 0)
		return (NULL);

	chars = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		chars[i] = c;
	}

	if (chars == NULL)
		return (NULL);

	return (chars);
}
