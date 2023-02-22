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

	last_digit = n % 10;
	if (n < 0)
		last_digit = last_digit * -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
