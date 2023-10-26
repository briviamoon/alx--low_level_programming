#include "main.h"
/**
 * set_bit - set valuse of bit to one an index
 * @n: pointer to number
 * @index: position to set bit
 * Return: 1 if success || -1 fail
 *
 * Description: checks if index is greater than range of int
 * Sets a mask corresponding to position of index within n
 * Uses OR or Equal to set bit at position to 1.
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}

	mask = 1ul << index;
	*n |= mask;

	return (1);
}
