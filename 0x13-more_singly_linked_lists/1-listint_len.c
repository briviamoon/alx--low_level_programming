#include "lists.h"

/**
 * listint_len - returns number of elements in linked list.
 * @h: pointer to node.
 * Return:number of elements list
*/

size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
