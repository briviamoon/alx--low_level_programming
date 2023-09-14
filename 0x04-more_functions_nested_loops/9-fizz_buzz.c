#include "main.h"
/**
 *fizz_buzz - prints out buzz & fizz
 */

void fizz_buzz(void)
{
	int count;

	for (count = 0; count <= 100; count++)
	{
		int boogie = count * 3;
		int woggie = count * 5;

		if (boogie % 3 == 0)
		{
			printf("Fizz");
		}
		else if (woggie % 5 == 0)
		{
			printf("Buzz");
		}
		else if (boogie % 3 == 0 && woggie % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", count);
		}
		printf(" ");
	}
}
