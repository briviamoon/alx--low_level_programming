#include "main.h"
/**
 *print_most_numbers - print numbers except 2 & 4.
 */

void print_most_numbers(void)
{
	int num = 0;

	while (num >= 0 && num <= 9)
	{
		if (!(num = 2 and num = 4))
		{
			_putchar(num + '0');
		}
		num++;
	}
}
