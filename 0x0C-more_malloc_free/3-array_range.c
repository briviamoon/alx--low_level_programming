#include "main.h"

/**
 * array_range - creates array of intagers
 * @min: minium number
 * @max: maximum number
 *
 * Return: ptr to new array
 *			Null if min > max or malloc fail.
*/

int *array_range(int min, int max)
{
	int *numbers;
	int counter = 0;
	int length;

	if (min > max)
	{
		return (NULL);
	}
	length = (max - min) + 1;
	numbers = malloc(sizeof(int) * length);
	if (numbers == NULL)
	{
		return (NULL);
	}

	while (min <= max)
	{
		numbers[counter] = min;
		counter++;
		min++;
	}
	return (numbers);
	free(numbers);
}
