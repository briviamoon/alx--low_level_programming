#include <stdio.h>

/**
 * main - prints its name
 * @argv: aray of  strings in cmd line.
 * @argc: number of cmd args
 * Return: 0 if success
*/

int main(int argc, char *argv[])
{
	if (argc == 1 && argv[0] != NULL)
	{
		printf("%s", argv[0]);
		putchar('\n');
	}
	return (0);
}
