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

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int result, a, b;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		printf("%d\n", 98);
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && num2 == 0)
	    || (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		printf("%d\n", 100);
		exit(100);
	}

	printf("%d\n", get_op_func(op)(a, b));

	return (0);
}
