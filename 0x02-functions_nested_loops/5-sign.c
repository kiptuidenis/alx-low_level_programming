#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *print_sign - checks sign of argument passed
 *@n: The character to be checked
 *
 *Return: 1 if positive, 0 if zero and -1 if negative.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}

	if (n < 0)
		putchar('-');
		return (-1);

	if (n == 0)
		putchar('0');
		return (0);
}
