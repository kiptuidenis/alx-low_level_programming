#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
 *more_numbers - prints 0-14 10x
 */

void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar(i / 10 + '0');
			}

			_putchar(i % 10 + '0');
		}

		_putchar('\n');
	}
}
