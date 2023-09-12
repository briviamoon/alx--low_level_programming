#include "main.h"
/**
 *_abs - prints the absolute value of a number.
 *Return: val when successful.
 *@arg: the type to input.
 */

int _abs(int arg)
{
	if (arg < 0)
	{
		int val = arg * -1;

		return (val);
	}
	else if (arg > 0)
	{
		int val = arg * 1;

		return (val);
	}
	else
	{
		return (0);
	}
}
