#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n;
	unsigned int tmp;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	tmp = n % 10;

	if (tmp > 5)
	{
		printf("The last digit of %d is %d and is greater than 5", n
		       , tmp);
	}
	if (tmp == 0)
	{
		printf("The last digit of %d is %d and is 0", n, tmp);
	}
	if (tmp < 6 && tmp != 0)
	{
		printf("The last digit of %d is %d ", n, tmp);
	}

	printf("\n");

	return (0);
}
