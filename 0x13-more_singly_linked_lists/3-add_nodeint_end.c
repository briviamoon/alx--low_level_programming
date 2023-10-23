#include "lists.h"

/**
 * add_nodeint_end - adds new node at end of list
 * @head: pointer to a pointer to a new node.
 * @n: int element in list
 * Return: pointer to new node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newLastNode, *current;

	newLastNode = malloc(sizeof(listint_t));
	if (newLastNode == NULL)
	{
		return (NULL);
	}

	newLastNode->n = n;
	newLastNode->next = NULL;

	if (*head == NULL)
	{
		*head = newLastNode;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = newLastNode;
	}
	return (newLastNode);
}
