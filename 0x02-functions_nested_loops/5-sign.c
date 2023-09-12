#include "main.h"
/**
 *print_sign - prints a number's sign.
 *@n: the number to be checked.
 *Return: 1 when possitive int,
 *	  0 when int is 0,
 *	  -1 when int is negative.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
