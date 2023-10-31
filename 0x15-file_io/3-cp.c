#include "main.h"

/**
 * error - handle error
 * @code: exit code.
 * @format: error message
 * @arg: arg related to error
*/
void error(int code, const char *format, const char *arg)
{
	dprintf(STDERR_FILENO, format, arg);
	exit(code);
}

/**
 * errorFD - hadle for FD.
 * @code: exit code.
 * @format: string to print to stdout
 * @FD: file descriptor value related to error
*/
void errorFD(int code, const char *format, int FD)
{
	dprintf(STDERR_FILENO, format, FD);
	exit(code);
}


/**
 * main - copy from file1 to file2
 * @argc: number of args
 * @argv: arg  string
 * Return: 0 if success.
*/
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		error(97, "Usage: %s file_from file_to\n", argv[0]);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		error(98, "Error: Can't read from file %s\n", argv[1]);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		error(99, "Error: Can't write to file %s\n", argv[2]);
	}
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			error(99, "Error: Can't write to file %s\n", argv[2]);
		}
	}
	if (bytes_read == -1)
	{
		error(98, "Error: Can't read from file %s\n", argv[1]);
	}
	if (close(fd_from) == -1)
	{
		errorFD(100, "Error: Can't close fd %d\n", fd_from);
	}
	if (close(fd_to) == -1)
	{
		errorFD(100, "Error: Can't close fd %d\n", fd_to);
	}
	return (0);
}
