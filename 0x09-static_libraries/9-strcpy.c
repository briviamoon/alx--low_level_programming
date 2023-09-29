#include "main.h"

/**
 *_strcpy - copy a string to a destination.
 *@dest: destination of copied string.
 *@src: source of copied string.
 *Return: home.
 */

char *_strcpy(char *dest, char *src)
{
	char *home = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (home);
}
