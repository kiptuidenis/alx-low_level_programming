#include <stdio.h>
#include <stdlib.h>

/**
 *main - multiplis arguments
 *@argc: argument count
 *@argv: strings passed
 *
 *Return: 0 on Success, 1 on error
 */

int main(int argc, char *argv[])
{
	int arg1, arg2, mul_result;

	(void)argc;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		arg1 = atoi(argv[1]);
		arg2 = atoi(argv[2]);
		mul_result = arg1 * arg2;
		printf("%d\n", mul_result);
	}

	return (0);
}
