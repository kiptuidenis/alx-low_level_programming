#include <stdio.h>
#include "main.h"

/**
 *binary_to_uint - converts binary string to unsigned int
 *@b: binary string
 *
 *Return: converted number, or 0 if b is NULL or if there is one or
 *more chars in the string b that is not 0 or 1there is one or more chars
 *in the string b that is not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		result = (result << 1) + (*b - '0');
		b++;
	}

	return (result);
}
