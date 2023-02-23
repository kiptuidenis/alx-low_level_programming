#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *_isdigit - checks if argument passed is digit
 *@c: The character to be checked
 *
 *Return: 1 if digit. 0 otherwise
 */

int _isdigit(int c)
{
	int tmp = c;

	if (tmp >= 48 && tmp <= 57)
	{
		return (1);
	}
	else
		return (0);
}
