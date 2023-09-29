#include <stdio.h>
#include <stdlib.h>

/**
 * main - print number of cmd args
 * @argc: numbe of cmd args
 * @argv: array of args
 * Return: o if success
*/

int main(int argc, char **argv)
{
	int i;

	if (argc < 2)
	{
		printf("ERROR\n");
		return (1);
	}
	else
	{
		i = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", i);
	}
	return (i);
}
