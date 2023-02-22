#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *_abs - computes absolute value of argument
 *@n: The character to be checked
 *
 *Return: The absolute value of argument
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	if (n > 0)
		return (n);

	return (0);
}
