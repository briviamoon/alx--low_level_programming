#include "main.h"
/**
 * get_bit - get value of bit at a given index
 * @n: unsigned long int
 * @index: index of n
 * Return: value at index of n
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	int bit;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1UL << index;
	bit = (n & mask) ? 1 : 0;

	return (bit);
}
