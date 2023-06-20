#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <limits.h>

/**
 *handle_strtol_error - checks if arguments are integers
 *@input: inputs from the command line
 *@sum: results of the sum of inputs
 *@error_flag: checks for errors
 *
 */

void handle_strtol_error(const char *input, long *sum, int *error_flag)
{
	char *endptr;
	long number;

	errno = 0;

	number = strtol(input, &endptr, 10);

	if (endptr == input)
	{
		printf("Error\n");
		*error_flag = 1;
	}
	else if (*endptr != '\0')
	{
		printf("Error\n");
		*error_flag = 1;
	}
	else if ((number == LONG_MIN || number == LONG_MAX) && errno == ERANGE)
	{
		printf("Error\n");
		*error_flag = 1;
	}
	else if (number < 0)
	{
		printf("Error\n");
		*error_flag = 1;
	}
	else
	{
		*sum += number;
	}
}

/**
 *main - main function
 *@argc: argument count
 *@argv: strings passed
 *
 *Return: 1 on failure, 0 on success
 */

int main(int argc, char *argv[])
{
	int i;
	long sum = 0;
	int error_flag = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		handle_strtol_error(argv[i], &sum, &error_flag);
		if (error_flag)
			return (1);
	}

	printf("%ld\n", sum);
	return (0);
}
