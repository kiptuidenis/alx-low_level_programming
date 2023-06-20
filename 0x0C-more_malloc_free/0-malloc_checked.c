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
	int *b_pointer;

	b_pointer = (int)malloc(b);
	if (b_pointer == NULL)
		exit(98);
	*b_pointer = b;
	return (b_pointer);
}
