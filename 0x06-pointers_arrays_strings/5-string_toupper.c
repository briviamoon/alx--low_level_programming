#include "main.h"

/**
 * string_toupper - change lower case letters to uppercase.
 * 
*/
char *string_toupper(char *str)
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