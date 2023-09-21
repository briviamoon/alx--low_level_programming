#include "main.h"

/**
 * cap_string - capitalizes all words if a string.
 * @str: string to capitalize.
 * Return: str.
 */

char *cap_string(char *str)
{
	char *ptr = str;
	char separator[] = ",;.!?\"(){}";
	int counter;
	int marker;

	while (*ptr != '\0')
	{
		for (counter = 0; separator[counter] != '\0'; counter++)
		{
			if (*ptr == separator[counter])
			{
				marker = 1;
				break;
			}
		}

		if (marker && *ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr + ('A' - 'a');
			marker = 0;
		}
		ptr++;
	}
	return (str);
}
