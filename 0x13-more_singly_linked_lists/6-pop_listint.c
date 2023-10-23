#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: pointer to pointer to a node
 * Return: data on head-node's element n.
*/

int pop_listint(listint_t **head)
{
	int data = 0;

	if (*head != NULL)
	{
	listint_t *temporary = *head;

	data = temporary->n;
	*head = (*head)->next;
	free(temporary);
	}
	return (data);
}
