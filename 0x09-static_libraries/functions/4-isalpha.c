#include "main.h"
/**
 *_isalpha - Checks for alphabets.
 *@c: the char to be checked.
 *Return: 0 when untrue. 1 when true.
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
