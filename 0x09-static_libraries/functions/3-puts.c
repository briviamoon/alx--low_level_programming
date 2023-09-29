#include "main.h"

/**
 *_puts - prints string.
 *@str: string arg to print.
 */

void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
