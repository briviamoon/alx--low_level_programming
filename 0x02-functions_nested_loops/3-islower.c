#include "main.h"
/**
 *_islower - informs lower case characters.
 *@c: character for checking.
 *Return: is_it value.
 */

int _islower(int c)
{
	char low_case = 'a';
	int is_it = 0;

	while (low_case <= 'z')
	{
		if (low_case == c)
		{
			is_it = 1;
		}
		else
		{
			is_it = 0;
		}
		low_case++;
	}
	return (is_it);
}
