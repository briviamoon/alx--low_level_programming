#include "lists.h"

/**
 * sum_listint - finds sum of all data in (n) element
 * @head: pointer to node
 * Return: sum of all data
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
