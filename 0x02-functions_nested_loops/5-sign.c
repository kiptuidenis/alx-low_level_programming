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
	int tmp = n;

	if (tmp > 0)
	{
		printf("+1");
		return (1);
	}

	if (tmp == 0)
	{
		printf("0");
		return (0);
	}

	if (tmp < 0)
	{
		printf("-1");
		return (-1);
	}

	return (5);
}
