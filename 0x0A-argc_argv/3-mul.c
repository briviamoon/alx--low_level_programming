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
	if (argc < 2)
	{
		printf("ERROR\n");
		return (1);
	}
	else
	{
		printf("%d", atoi(argv[1]) * atoi(argv[2]));
		printf("\n");
	}
	return (1);
}
