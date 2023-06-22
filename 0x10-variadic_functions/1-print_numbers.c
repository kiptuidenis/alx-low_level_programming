#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_numbers - prints numbers followed by new line
 *@separator: string printed between numbers
 *@n: number of integers passed
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int numbers;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		numbers = va_arg(args, int);
		if (separator == NULL)
		{
			printf("%d", numbers);
			continue;
		}
		if (i != n - 1)
		{
			printf("%d%s", numbers, separator);
			continue;
		}
		if (i == n - 1)
			printf("%d", numbers);
	}

	printf("\n");
}
