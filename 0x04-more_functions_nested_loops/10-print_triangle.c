#include "main.h"
/**
 *print_triangle - prints triangle.
 *@size: area = size of the triangle.
 */

void print_triangle(int size)
{
	int count;
	char block = '#';
	char space  = ' ';
	int spaceNo;

	if (size > 0)
	{
		for (count = 0; count < size; count++)
		{
			for (spaceNo = size - count; spaceNo >= 0; spaceNo--)
			{
				_putchar(space);
			}
			for (int row = 0; row <= count + 1; row++)
			{
				_putchar(block);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
