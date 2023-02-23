#include <stdio.h>
#include <time.h>
#include "main.h"

/**
 *print_triangle - print triangle line in terminal
 *@size:number of times character is printed
 */

void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');

		return;
	}

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size - i; j++)
		{
			_putchar(' ');
		}

		for (j = 1; j <= i; j++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}
