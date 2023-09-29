#include <stdio.h>

/**
 * main - prints its name
 * @argv: aray of  strings in cmd line.
 * @argc: unused number of cmd.
 * Return: 0 if success
*/

int main(int argc __attribute__((unused)), char *argv[])
{
	int i = 0;

	printf("%s", argv[i]);
	putchar('\n');
	return (0);
}
