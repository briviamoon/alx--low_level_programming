#include "../main.h"

/**
 * palindrome_check - looks for matching characters
 * @s: subjet string.
 * @start: starting index.
 * @end: last index.
 * Return: 1 if palindrome, 0 if not.
*/

int palindrome_check(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	else if (s[start] != s[end])
	{
		return (0);
	}
	else
	{
		return (palindrome_check(s, start + 1, end - 1));
	}
}
