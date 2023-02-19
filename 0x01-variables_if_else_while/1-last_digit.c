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
	if (n < 0)
	{
		n = n * (-1);
	}

	tmp = n % 10;
	if (tmp < 6 && tmp != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0"
		       , n, tmp);
	}
	else if (tmp > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n
		       , tmp);
	}
	else if (tmp == 0)
	{
		printf("Last digit of %d is %d and is 0", n, tmp);
	}


	printf("\n");

	return (0);
}
