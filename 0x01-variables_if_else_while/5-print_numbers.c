#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i = 0;
	char alphabet[10] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};
	for (i = 0; i <= 10; ++i)
	{
		putchar(alphabet[i]);
	}

	putchar('\n');
	return (0);
}