#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 *create_file - creates a file
 *@filename: name of file
 *@text_content: content of file
 *Return: 1 on success -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file_descrpt;
	size_t data_size;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		text_content = "";
	}

	data_size = strlen(text_content);

	file_descrpt = open(filename, O_WRONLY | O_CREAT | O_TRUNC,
			    S_IRUSR | S_IWUSR);
	if (file_descrpt == -1)
		return (-1);

	bytes_written = write(file_descrpt, text_content, data_size);
	if (bytes_written == -1)
	{
		close(file_descrpt);
		return (-1);
	}

	close(file_descrpt);
	return (1);
}
