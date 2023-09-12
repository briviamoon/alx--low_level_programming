#include "main.h"
/**
 *times_table - multiplies 9 in 2 dimentions.
 *
 */

void times_table(void)
{
	int first;
	int sec;

	for (first = 0; first <= 9; first++)
	{
		for (sec = 0; sec <= 9; sec++)
		{
			_putchar((first * sec) + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
