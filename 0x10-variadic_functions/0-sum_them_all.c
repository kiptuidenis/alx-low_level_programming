#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 *sum_them_all - sums all arguments passed
 *@n: number of arguments
 *
 *Return: sum of parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int num;
	int total = 0;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		total += num;
	}

	va_end(args);

	return (total);

}
