#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_strings - prints numbers followed by new line
 *@separator: string printed between numbers
 *@n: number of strings passed
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *strings;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		strings = va_arg(args, char *);
		if (separator == NULL)
		{
			printf("%s", strings);
			continue;
		}
		if (i != n - 1)
		{
			if (strings == NULL)
			{
				printf("nil%s", separator);
				continue;
			}
			printf("%s%s", strings, separator);
			continue;
		}
		if (i == n - 1)
		{
			if (strings == NULL)
			{
				printf("nil%s", separator);
				continue;
			}
			printf("%s", strings);
			
		}
	}
	

	printf("\n");
}
