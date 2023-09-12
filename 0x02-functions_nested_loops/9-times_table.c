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
	int modular;
	int whole;

	for (first = 0; first <= 9; first++)
	{
		for (sec = 0; sec <= 9; sec++)
		{

			result = first * sec;
			modular = result % 10;
			whole = result / 10;

			if (sec == 0)
			{
				_putchar('0');
			}
			else if (result < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(modular + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(modular + '0');
				_putchar(whole + '0');
			}
		}
		_putchar('\n');
	}
}
