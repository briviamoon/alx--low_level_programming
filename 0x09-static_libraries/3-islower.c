#include "main.h"
/**
 *_islower - informs lower case characters.
 *@c: character for checking.
 *Return: 1 for true value
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
