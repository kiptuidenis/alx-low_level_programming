#include <stdio.h>
#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 *@a: first interger
 *@b: second integer
 *@c: third integer
 *Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;

		return (largest);
	}
	else if (b > a && b > c)
	{
		largest = b;

		return (largest);
	}
	else if (c > a && c > b)
	{
		largest = c;

		return (largest);
	}
	else if (a == b && a > c)
	{
		largest = a;

		return (largest);
	}
	else if (a == c && a > b)
	{
		largest = a;

		return (largest);
	}
	else if(b == c && b > a)
	{
		largest = b;

		return (largest);
	}
	else if (a == b && b ==c)
		return (a);
	else
		return (a);
}
