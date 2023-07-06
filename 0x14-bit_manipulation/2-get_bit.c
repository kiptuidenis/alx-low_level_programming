#include <stdio.h>
#include "main.h"

/**
 *get_bit - finds value of a bit at a given index
 *@n: number
 *@index: index
 *
 *Return: returns the value of a bit at a given index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;
	unsigned long int result = n & mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	return ((result != 0) ? 1 : 0);
}
