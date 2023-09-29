#include "main.h"

/**
 *_strlen - grts string length.
 *@s: string argument
 *Return: length.
 *(*s != '\0'): iterate throught each char while it's not null.
 *len: a counter throught the strin array positions/index.
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
