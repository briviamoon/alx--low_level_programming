#include "lists.h"

/**
 * free_list - fees list
 * @head: pointer to node
*/

void free_list(list_t *head)
{
	free(head->str);
	free(head->next);
	free(head);
}
