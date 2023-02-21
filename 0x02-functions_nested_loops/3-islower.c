#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *_islower - checks if argument passed is lowercase
 *@c - The character to be checked
 *
 *Return: 1 if the letter is lowercase. 0 otherwise
 */

int _islower(int c)
{
	int tmp = c + '0';

	if (tmp >= 97 || <= 122)
	{
		return (1);
	}
	else
		return (0);
}
