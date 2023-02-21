#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *_isalpha - checks if argument passed is alphabet
 *@c: The character to be checked
 *
 *Return: 1 if the letter is lowercase or uppercase. 0 otherwise
 */

int _isalpha(int c)
{
	int tmp = c;

	if ((tmp >= 97 && tmp <= 122) || (tmp >= 65 && tmp <= 90))
	{
		return (1);
	}
	else
		return (0);
}
