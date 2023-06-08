#include <stdio.h>

/**
 *_pow_recursion - finds the power of a value
 *@x: number whose power is to be calculated
 *@y: power to be raised to.
 *
 *Return: power of x
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
