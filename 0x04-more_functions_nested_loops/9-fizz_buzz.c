#include <stdio.h>
#include "main.h"
/**
 *main - starting point.
 */

void main(void)
{
	int count;

	for (count = 1; count < 100; count++)
	{

		if (count % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (count % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (count % 3 == 0 && count % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", count);
		}
	}
	printf("Buzz\n ");
}
