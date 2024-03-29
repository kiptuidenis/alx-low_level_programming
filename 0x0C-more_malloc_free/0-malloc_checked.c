#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *malloc_checked - allocates memory using malloc
 *@b: value to be stored
 *
 *Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *b_pointer;

	b_pointer = malloc(b);
	if (b_pointer == NULL)
		exit(98);
	return (b_pointer);
}

