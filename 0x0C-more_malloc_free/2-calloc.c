#include "main.h"

/**
 * _calloc - allocates mem for array
 * @nmemb: unknown members.
 * @size: size of each member
 *
 * Return: pointer to allocated mem.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned char *byteptr;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	byteptr = (unsigned char *)ptr;

	for (i = 0; i < nmemb * size; i++)
	{
		byteptr[i] = 0;
	}

	return (ptr);
}
