#include "main.h"
/**
 *print_to_98 - prints from input number till 98.
 *@n: the input numer.
 */

void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("%d\n", n);
	}
}
