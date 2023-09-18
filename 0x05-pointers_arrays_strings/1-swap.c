#include "main.h"

/**
 *swap_int - swaps argument ints.
 *@a: first argument.
 *@b: secnd argument.
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
