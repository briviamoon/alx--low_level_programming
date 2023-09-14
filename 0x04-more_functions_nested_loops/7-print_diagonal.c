#include "main.h"
/**
 *print_diagonal - prints diagonal shape
 *@n: length of diaghonal in number of times.
 */

void print_diagonal(int n)
{
	char di = '\\';
	int count;
	int spaceNo;
	char space = ' ';

	if (n > 0)
	{
		for (count = 0; count < n; count++)/*this counts the number of times the diagonals will be put. it is ledd than (n) by 1 accounting for 0*/
		{
			for (spaceNo = 0; spaceNo < count; spaceNo++)/*this counts the number of spaces to put. the spaces are 1 less than the number of (di)*/
			{
				_putchar(space);
			}
			_putchar(di);
			_putchar('\n');/*insert new line after every dagonal to make incrementing space tage diagonal shape.*/
		}/*exit the count looping controling diagonals*/
	}
	else
	{
		_putchar('\n');
	}
}
