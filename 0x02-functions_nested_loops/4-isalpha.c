#include "main.h"
/**
  *_isalpha - Checks for alphabets.
 *@c: the char to be checked.
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
