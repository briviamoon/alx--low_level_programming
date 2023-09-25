#include "main.h"

/**
 * _memset - fills memory with constant bye.
 * @s: memory area to fill.
 * @b: constant byte.
 * @n: number of bytes to be filled.
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;
	unsigned int index;
	for (index = 0; index < n; index++)
	{
		*p = b;
		p++;
	}
	return (s);
}
