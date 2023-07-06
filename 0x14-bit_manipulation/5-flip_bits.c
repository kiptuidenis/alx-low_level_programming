#include <stdio.h>
#include "main.h"

/**
 *flip_bits -finds the number of bits you would need to flip to get from one
 *@n: original number
 *@m: new number
 *
 *Return: the number of bits you would need to flip to get from one
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorResult = n ^ m;
	unsigned int count = 0;

	while (xorResult != 0)
	{
		count += xorResult & 1;
		xorResult >>= 1;
	}

	return (count);
}
