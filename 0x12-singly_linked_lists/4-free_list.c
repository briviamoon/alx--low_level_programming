#include "lists.h"

/**
 * free_list - fees list
 * @head: pointer to node
*/

void free_list(list_t *head)
{
	list_t *current;

		while (head != NULL)
		{
			current = head;
			head = head->next;
			free(current->str);
			free(current);
	}
}
