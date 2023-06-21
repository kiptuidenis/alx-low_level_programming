#include "function_pointers.h"
#include <stdio.h>

/**
 *int_index - searches for an integer
 *@array: array to be searched
 *@size: number of elements in array
 *@cmp: function to compare
 *
 *Return: Index of first element,-1 if no element matches or if size less than 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;
	int compare;

	if (size <= 0)
		return -1;

	for (index = 0; index < size; index++)
	{
		compare = cmp(array[index]);

		if (compare != 0)
			return (index);
	}

	return (-1);
}
