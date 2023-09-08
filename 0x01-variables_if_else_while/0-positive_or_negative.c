#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point.
 *Return: Always 0 if success.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is possitive", n);
	}
	elseif(n < 0)
	{
		printf("%d is negative", n);
	}
	else
	{
		print("%d is negative");
	}

	return (0);
}
