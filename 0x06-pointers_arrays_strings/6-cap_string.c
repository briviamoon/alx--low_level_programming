#include "main.h"

/**
 * cap_string - capitalizes all words if a string.
 * @str: string to capitalize.
 * Return: str.
*/

char *cap_string(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr + ('A' - 'a');
		}
		ptr++;
	}
	return (str);
}
