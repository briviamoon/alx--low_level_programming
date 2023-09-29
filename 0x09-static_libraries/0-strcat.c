#include "main.h"

/**
 *_strcat - concantinates two strings.
 *@dest: arg to be concantinated to.
 *@src: arg to concantinate.
 *Return: pointer to resulting string dest (home).
 */

char *_strcat(char *dest,  char *src)
{
	char *final = dest;

	while (*final != '\0')
	{
		final++;
	}
	while (*src != '\0')
	{
		*final = *src;
		src++;
		final++;
	}
	*final = '\0';
	return (dest);
}
