#include "main.h"
/**
 *jack_bauer - puts out a 24 hour minute countdown
 *		like how jack bouer's 24 series did
 *		Gosh i loved that series.
 *
 */

void jack_bauer(void)
{
	int hour;
	int min;

	for (hour = 0; hour <= 23; hour++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}
