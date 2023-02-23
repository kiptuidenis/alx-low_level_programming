#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
 *more_numbers - prints 0-14 10x
 */

void more_numbers(void)
{
	char numb[20] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
			 '1', '0', '1', '1', '1', '2', '1', '3',
			'1', '4'};
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 19)
		{
			_putchar(numb[j]);
			_putchar('');
		}

		_putchar('\n');
	}
}
