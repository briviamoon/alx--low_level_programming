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
			for (spaceNo = count - 1; spaceNo >= 0; spaceNo--)
			{
				_putchar(space);
			}
			for (count = 0; count < size; count++)
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
