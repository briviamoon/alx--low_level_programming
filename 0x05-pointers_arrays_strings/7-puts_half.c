#include "main.h"

/**
 *puts_half - prints half a string,
 *		when length is odd number,
 *		it prints the last n chracters.
 *@str: string argument.
 */

void puts_half(char *str)
{
	int index;
	int len = 0;
	int start;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 != 0)
	{
		start = (len + 1) / 2;
	}
	else
	{
		start = len / 2;
	}

	for (index = start; index < len; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
