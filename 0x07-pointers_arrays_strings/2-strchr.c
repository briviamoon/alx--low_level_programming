#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: subject stirng.
 * @c: character to look for.
 * Return: pointer to first occurence.
 *			NULL if not present.
*/

char *_strchr(char *s, char c)
{
	char *p;

	while (*s != '\0')
	{
		if (*s == c)
		{
			p = s;
			return (p);
		}
		s++;
	}
	return (NULL);
}
