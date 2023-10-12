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

	/*len = strlen(separator);*/

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ptr, unsigned int));
		if (separator != NULL && !(i == n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}

