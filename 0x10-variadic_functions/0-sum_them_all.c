#include "variadic_functions.h"

/**
 *sum_them_all - prints sum of all parameters
 *@n: first argument
 *Return: 0 if n == 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list ptr;

	if (n == 0)
	{
		return (0);
	}

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, unsigned int);
	}
	return (sum);
}

