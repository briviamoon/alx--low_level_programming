#include "main.h"

/**
 * binary_to_uint - converts a binary number to an un-int
 * @b: pointer to a string of binary
 * Return: converted number or 0 if;
 *		if there is char in string not 0 || 1
 *		when b == NULL
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int number  = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (*b)
	{
		if (*b == '0' || *b == '1')
		{
			number = (number << 1) + (*b - '0');
			b++;
		}
		else
		{
			return (0);
		}
	}
	return (number);
}
