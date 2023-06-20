#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <limits.h>

long parseNumber(const char *input, int *error_flag);
void handleParsingError(const char *message, int *error_flag);
void addToSum(long number, long *sum, int *error_flag);
void printResult(long sum, int error_flag);

/**
 * parseNumber - Parses a string input and converts it to a long number.
 *
 * @input: The string input to parse.
 * @error_flag: A pointer to the error flag.
 *
 * Return: The parsed long number.
 */
long parseNumber(const char *input, int *error_flag)
{
	char *endptr;
	long number;

	errno = 0;

	number = strtol(input, &endptr, 10);

	if (endptr == input || *endptr != '\0')
	{
		handleParsingError("Invalid number", error_flag);
		return (0);
	}
	else if ((number == LONG_MIN || number == LONG_MAX) && errno == ERANGE)
	{
		handleParsingError("Number out of range", error_flag);
		return (0);
	}
	else if (number < 0)
	{
		handleParsingError("Negative number not allowed", error_flag);
		return (0);
	}

	return (number);
}

/**
 * handleParsingError - Handles the error condition during number parsing.
 *
 * @message: The error message to print.
 * @error_flag: A pointer to the error flag.
 *
 * This function prints the error message and sets
 * the error flag to indicate an error.
 */
void handleParsingError(const char *message, int *error_flag)
{
	printf("%s\n", message);
	*error_flag = 1;
}

/**
 * addToSum - Adds a number to the sum if no error has occurred.
 *
 * @number: The number to add to the sum.
 * @sum: A pointer to the sum variable.
 * @error_flag: A pointer to the error flag.
 *
 * This function adds the number to the sum if no error has occurred.
 */
void addToSum(long number, long *sum, int *error_flag)
{
	if (!*error_flag)
	{
		*sum += number;
	}
}

/**
 * printResult - Prints the final result if no error has occurred.
 *
 * @sum: The final sum to print.
 * @error_flag: The error flag indicating if an error occurred.
 *
 * If no error has occurred, this function prints the final sum.
 */
void printResult(long sum, int error_flag)
{
	if (!error_flag)
	{
		printf("%ld\n", sum);
	}
}

/**
 *main - main function
 *@argc: argument count
 *@argv: string of arguments
 *
 *Return: 0 on success, 1 on failure
 */

int main(int argc, char *argv[])
{
	long sum = 0;
	int error_flag = 0;
	int i;
	long number;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		number = parseNumber(argv[i], &error_flag);
		addToSum(number, &sum, &error_flag);
		if (error_flag)
		{
			return (1);
		}
	}

	printResult(sum, error_flag);
	return (0);
}

