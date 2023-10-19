#include "lists.h"

/**
 *add_node_end - adds new node to end of list
 *@head: link to first note.
 *@str: pointer to string member
 *Return: address of new element || NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current;

	if (str == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	if (str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}
	return (new_node);
}
