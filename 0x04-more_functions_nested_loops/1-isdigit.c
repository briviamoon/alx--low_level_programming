#include "main.h"
/**
 *_isdigit - checks for digit.
 *@c: rgument to check.
 *Return: 1 if digit.
 *	  0 if not.
 */

int _isdigit(int c)
{
	char b;
	int digit;

	for (char b = '0'; b <= '9'; b++)
	{
		if (b == c)
		{
			return (1);
		}
	}
	return (0);
}
