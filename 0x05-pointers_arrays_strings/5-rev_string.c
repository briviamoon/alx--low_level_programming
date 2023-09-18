#include "main.h"

/**
 *rev_string - prints a reverse string.
 *@s: string argument.
 */

void rev_string(char *s)
{
	int len = 0;
	int end;
	int start;
	char temp;

	while (s[len] != '\0')
	{
		len++;
	}

	for (start = 0, end = len - 1; start < end; start++, end--)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
	}
}
