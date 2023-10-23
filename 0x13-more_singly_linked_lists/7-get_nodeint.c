#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of list
 * @head: pointer to node
 * @index: nth node per the index
 * Return: the node at nth index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nth = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (head != NULL)
	{
		if (nth == index)
		{
			return (head);
		}
		head = head->next;
		nth++;
	}
	return (NULL);
}
