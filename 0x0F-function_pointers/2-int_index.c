#include "function_pointers.h"

/**
 * int_index - searches for intager
 * @array: pointer to array
 * @size: size on array
 * @cmp: pointer to function to compare values
 * Return: -1 if size <=0
 *			-1 if no elmt matches
 *			index of first elemnt for which cmp
 *			doesn't return 0.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int value;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		value = cmp(array[i]);

		if (value != 0)
		{
			return (i);
		}
	}
	return (-1);
}
