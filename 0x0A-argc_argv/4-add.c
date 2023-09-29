#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - print number of cmd args
 * @argc: numbe of cmd args
 * @argv: array of args
 * Return: o if success
 */

int real_num(char *s);

int main(int argc, char **argv)
{
	int i, j = 0;

	if (argc < 2)
	{
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (real_num(argv[i]))
			{
				j += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", j);
	}
	return (0);
}

/**
 * real_num - checks if it's real number
 * @s: string ptr
 * Return: 0 if false.
*/

int real_num(char *s)
{
	while (*s != '\0')
	{
		if (*s < '0' || *s > '9')
		{
			return (0);
		}
		s++;
	}
	return (1);
}