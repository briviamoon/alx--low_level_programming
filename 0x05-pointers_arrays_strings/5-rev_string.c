#include "main.h"

/**
 *rev_string - prints a reverse string.
 *@s: string argument.
 */

void rev_string(chsr *s)
{
	int len = 0;
	int index;

	while (s[len] != '\0')
	{
		len++;
	}

	for (index = len - 1; index >= 0; index--)
	{
		_putchar(s[index]);
	}
}
