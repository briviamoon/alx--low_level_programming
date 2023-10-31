#include "main.h"

/**
 * error - formats and prints error message in POSIX std.
 * @code: exit code.
 * @format: string error message.
 */
void error(int code, const char *format, ...)
{
	va_list args;

	va_start(args, format);
	dprintf(STDERR_FILENO, format, args);
	va_end(args);
	exit(code);
}

/**
 * main - copies content of one file to other.
 * @argc: number of arguments
 * @argv: string of argument strings.
 * Return: 0 if siccess.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	char buffer[1024];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
		error(97, "Usage: cp file_from file_to\n");

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		close(file_from);
		error(98, "Error: Can't read from file %s\n", argv[1]);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		close(file_to);
		error(99, "Error: Can't write to file %s\n", argv[2]);
	}
	bytes_read = read(file_from, buffer, sizeof(buffer));
	while (bytes_read > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
			close(file_from);
		close(file_to);
		error(99, "Error: Can't write to file %s\n", argv[2]);
	}

	if (bytes_read == -1)
		error(98, "Error: Can't read from file %s\n", argv[1]);

	if (close(file_from) == -1)
		error(100, "Error: Can't close fd %d\n", file_from);

	if (close(file_to) == -1)
		error(100, "Error: Can't close fd %d\n", file_to);

	return (0);
}
