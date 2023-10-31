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
	ssize_t bytesWriten;
	char *contents = malloc(letters);

	if (filename == NULL)
	{
		return (0);
	}

	file = open(filename, O_RDONLY);
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
	bytesWriten = write(STDOUT_FILENO, contents, bytesRead);
	if (bytesWriten != bytesRead || bytesWriten == -1)
	{
		close(file);
		return (0);
	}

	close(file);
	free(contents);
	return (bytesRead);
}
