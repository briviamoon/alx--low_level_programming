#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest: destination argument.
 * @src: source argument.
 * @n: number of max bytes to copy.
*/

char *_strncpy(char *dest, char *src, int n)
{
	char *home = dest;

	while (*src != '\0' && n > 0)
	{
		*home = *src;
		src++;
		home++;
		n--;
	}

	while (n > 0)
	{
		*home = '\0';
		home++;
		n--;
	}
	*home = '\0';
	return (dest);
}