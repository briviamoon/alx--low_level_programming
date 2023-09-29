#include "main.h"
/**
 *_atoi - conert string to intager
 *@s: pointer to string.
 *Return: 0 if numeric.
 */

int _atoi(char *s)
{
	int scheise = 1;

	while (*s != '\0')
	{
		if (*s <= '9' && *s >= '0')
		{
			*s = *s * 10 + (*s - '0');
		}
		else if (*s == '-')
		{
			scheise = -1;
		}
		else if (*s != ' ' && *s != '-')
		{
			return (0);
		}
		s++;
	}
	return (*s * scheise);
}
