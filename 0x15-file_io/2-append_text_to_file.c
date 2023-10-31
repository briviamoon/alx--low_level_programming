#include "main.h"

/**
 * append_text_to_file - appends text to a file.
 * @filename: path to file.
 * @text_content: string to append.
 * Return: 1 if succecc, -1 if fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fileDescriptor;
	int bytesToWrite;
	size_t contentLength = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	fileDescriptor = open(filename, O_WRONLY | O_APPEND);
	if (fileDescriptor == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		close(fileDescriptor);
		return (1);
	}
	while (text_content[contentLength] != '\0')
	{
		contentLength++;
	}

	bytesToWrite = write(fileDescriptor, text_content, contentLength);

	if (bytesToWrite == -1)
	{
		close(fileDescriptor);
		return (-1);
	}

	close(fileDescriptor);
	return (1);
}
