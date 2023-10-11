#include "function_pointers.h"

/**
 * array_iterator - executes function given on each par of an array
 * @array: pointer to array
 * @size: size of array
 * @action: pointer to function
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
