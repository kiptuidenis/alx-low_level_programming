#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *array_iterator - executes a function on each array element
 *@array: the array to be operated on
 *@size: size of the array
 *@action: pointer to functions
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index;

	for (index = 0; index < size; index++)
	{
		action(array[index]);
	}
}
