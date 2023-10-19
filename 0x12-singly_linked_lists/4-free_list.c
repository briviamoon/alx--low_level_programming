#include "lists.h"

/**
 * free_list - fees list
 * @head: pointer to node
*/

void free_list(list_t *head)
{
	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
		while(head->next != NULL)
		{
			free(head->str);
			free(head->next);
			head = head->next;
		}
	}
}
