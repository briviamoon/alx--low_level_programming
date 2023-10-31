#include "main.h"

/**
 * read_textfile - Reads text file and prints contents
 * @filename: name of file to read
 * @letters: number of letters to print
 * Return: number of letters it could read && print
 *		- 0 if file cannot be oppened
 *		- 0 if name is NULL && write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t bytesRead;
	char contents[letters + 1];

	file = open(filename, O_RDONLY);

	if (filename == NULL)
	{
		return (0);
	}

	if (file == -1)
	{
		return (0);
	}

	bytesRead = read(file, contents, letters);

	if (bytesRead == -1)
	{
		close(file);
		return (0);
	}

	contents[bytesRead] = '\0';

	if (write(STDOUT_FILENO, contents, bytesRead) != bytesRead)
	{
		close(file);
		return (0);
	}

	close(file);
	return (bytesRead);
}
