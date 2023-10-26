#include "main.h"

/**
 * clear_bit - turns bit to 0 at index
 * @n: pointer to number
 * @index: position of bit to evaluate
 * Return: -1 if fail || 1 if success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	mask = 1UL << index;
	*n &= ~mask;

	return (1);
}
