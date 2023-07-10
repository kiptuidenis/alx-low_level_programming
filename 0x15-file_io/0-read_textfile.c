#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 *read_textfile - reads a text file and prints it to the POSIX stdout
 *@filename: name of file
 *@letters: number of letters it should read and print
 *
 *Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_dcrpt;
	char *buffer;
	ssize_t bytes_printed;
	ssize_t bytes_read;

	if (filename == NULL)
		return (0);

	file_dcrpt = open(filename, O_RDONLY);
	if (file_dcrpt == -1)
		return (0);
	buffer = malloc(letters);

	if (buffer == NULL)
		return (0);

	bytes_read = read(file_dcrpt, buffer, letters);
	if (bytes_read == -1)
	{
		close(file_dcrpt);
		free(buffer);
		return (-1);
	}

	bytes_printed = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_printed != bytes_read)
	{
		close(file_dcrpt);
		free(buffer);
		return (0);
	}

	close(file_dcrpt);
	free(buffer);
	return (bytes_printed);
}
