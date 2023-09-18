#include "main.h"

/**
 *print_array - prints
 *@a: array pointer.
 *@n: number of elements to print.
 */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		if (index == n - 1)
		{
			printf("%d\n", a[index]);
		}
		else
		{
			printf("%d, ", a[index]);
		}
	}
}
