#include "lists.h"

/**
 * free_listint2 - frees list
 * @head: pointer to a pointer to a node.
*/

void free_listint2(listint_t **head)
{
	listint_t *current, *next;
	if (*head == NULL || head == NULL)
	{
		return;
	}
	current = *head;

	while (*head != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
