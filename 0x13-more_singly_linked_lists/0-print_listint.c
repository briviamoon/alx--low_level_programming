#include "lists.h"

/**
 * print_listint - print all elements in list
 * @h: pointer to node
 * Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
