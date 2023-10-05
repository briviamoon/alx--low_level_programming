#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: unsigned int
 *
 * Return: ptr if succesful, exit status 98 when not.
*/

void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
