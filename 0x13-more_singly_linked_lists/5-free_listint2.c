#include "lists.h"

/**
 * free_listint2 - frees list
 * @head: pointer to a pointer to a node.
*/

void free_listint2(listint_t **head)
{
	listint_t *current, *temporary;

	if (head == NULL)
	{
		return;
	}
	current = *head;

	while (current != NULL)
	{
		temporary = current;
		current = current->next;
		free(temporary);
	}
	*head = NULL;
}
