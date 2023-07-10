#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 *append_text_to_file - appends text at the end of file
 *@filename: name of file
 *@text_content: contents of file
 *
 *Return: 1 on success -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_descrpt;
	size_t content_size;
	ssize_t bytes_appended;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		text_content = "";
	}

	content_size = strlen(text_content);

	file_descrpt = open(filename, O_WRONLY | O_APPEND);
	if (file_descrpt == -1)
		return (-1);

	bytes_appended = write(file_descrpt, filename, content_size);
	if (bytes_appended == -1)
	{
		close(file_descrpt);
		return (-1);
	}

	close(file_descrpt);
	return (1);
}
