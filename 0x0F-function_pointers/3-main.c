#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - entry point
 *@argc: argument count
 *@argv: argument array
 *
 *Return: 0 on success, otherwise Error
 */

int main(int argc, char *argv[])
{
	int result, a, b;
	int (*check)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		printf("%d\n", 98);
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (b == 0)
	{
		printf("Error\n");
		printf("%d\n", 100);
		exit(100);
	}

	check = get_op_func(argv[2]);

	if (check == NULL)
	{
		printf("Error\n");
		printf("%d\n", 99);
		exit(99);
	}

	result = check(a, b);
	printf("%d\n", result);

	return (0);
}
