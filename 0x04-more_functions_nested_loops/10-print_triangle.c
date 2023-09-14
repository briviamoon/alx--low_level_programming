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
	int blockNo;

	if (size > 0)
	{
		for (count = 1; count <= size; count++)
		{
			for (spaceNo = size - count; spaceNo >= 1; spaceNo--)
			{
				_putchar(space);
			}
			for (blockNo = 1; blockNo <= count; blockNo++)
			{
				_putchar(block);
			}
			_putchar('\n');
		}
	}
	else if (size == 0 || size < 0)
	{
		_putchar('\n');
	}
}
