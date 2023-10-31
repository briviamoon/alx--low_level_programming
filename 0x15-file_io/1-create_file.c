#include "main.h"

/**
 * create_file - creates a file
 * @filename: path to filename
 * @text_content: content to write to filename.
 * Return: 1 on success, -1 on fail || filename = NULL
*/
int create_file(const char *filename, char *text_content)
{
	int fileDescriptor;
	int bytesToWrite;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		fileDescriptor = open(filename, O_CREAT);
		close(fileDescriptor);
	}
	fileDescriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fileDescriptor == -1)
	{
		close(fileDescriptor);
		return (-1);
	}

	bytesToWrite = write(fileDescriptor, text_content, strlen(text_content));
	if (bytesToWrite == -1)
	{
		return (-1);
	}
	close(fileDescriptor);
	return (1);
}
