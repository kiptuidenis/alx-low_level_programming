#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *_isupper - checks if argument passed is alphabet
 *@c: The character to be checked
 *
 *Return: 1 if the letter is lowercase or uppercase. 0 otherwise
 */

int _isupper(int c)
{
	int tmp = c;

	if (tmp >= 97 && tmp <= 122)
	{
		return (0);
	}
	else if (tmp >= 65 && tmp <= 90)
	{
		return (1);
	}
}
