#include "variadic_functions.h"

/**
 *print_numbers - prints numbers
 *@separator: string to print between numbers
 *@n: number of intagers passed.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	/*int len, j;*/
	/*va_list chr;*/
	va_list ptr;

	va_start(ptr, n);
	/*va_start(chr, separator);*/

	len = strlen(separator);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ptr, unsigned int));
		if (separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}

/**
 *strlen - gets string length.
 *@c: pointer to string
 *Return: final string length
 */

int strlen(char *c)
{
	int i = 0;

	while (*c != '\0')
	{
		i++;
		c++;
	}
	return (i);
}

