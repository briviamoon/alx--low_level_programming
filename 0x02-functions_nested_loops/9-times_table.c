#include "main.h"
/**
 *times_table - multiplies 9 in 2 dimentions.
 *
 */

void times_table(void)
{
	int first;
	int sec;
	int result;

	for (first = 0; first <= 9; first++)
	{
		_putchar(0);

		for (sec = 0; sec <= 9; sec++)
		{
			_putchar(',');
			_putchar(' ');

			result = first * sec;

			if (result <= 9)
				_putchar(' ');
			else
				_putchar((result / 10) + '0');
			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}
