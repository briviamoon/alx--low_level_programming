#include "main.h"
/**
 *print_numbers - prints numbers.
 */

void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		_puchar(num + '0');
	}
	_putchar('\n');
}
