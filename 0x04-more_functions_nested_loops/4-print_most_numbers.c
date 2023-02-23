#include <stdio.h>
#include <time.h>
#include "main.h"

/**
 *print_most_numbers - prints 0-14 10x
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}

		_putchar(i + '0');
	}

	_putchar('\n');
}
