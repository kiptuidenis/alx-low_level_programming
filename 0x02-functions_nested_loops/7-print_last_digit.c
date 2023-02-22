#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
 *print_last_digit - prints last digit of a number
 *@n: The character to be checked
 *
 *Return: Last digit of argument
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		n = n * -1;

	last_digit = n % 10;

	printf("%d\n", last_digit);

	return (last_digit);
}
