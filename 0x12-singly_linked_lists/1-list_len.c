#include "lists.h"

/**
 *list_len - returns num of elements in linked list.
 *@h: pointer to linked list node.
 *Return: number f elements in linked list
 */
size_t list_len(const list_t *h)
{
	size_t i;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}

