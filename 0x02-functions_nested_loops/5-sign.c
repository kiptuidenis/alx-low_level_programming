#include <stdlib.h>
#include <stdio.h>
#include "main.h"

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
		_putchar('+');
		return (1);
	}

	else if (tmp == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar("-");
		return (-1);
	}

}
