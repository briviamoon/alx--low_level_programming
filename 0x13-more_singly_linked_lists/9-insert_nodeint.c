#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to a pointer to a node
 * @idx: index where to add.
 * @n: element in new node
 * Return: pointer to new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *current;
	unsigned int nth = 0;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	if (*head == NULL)
	{
		*head = newNode;
	}
	current = *head;
	while (current->next != NULL)
	{
		if (nth == idx)
		{
			current->next = newNode;
			newNode->next = current;
		}
		current = current->next;
	}
	return (newNode);
	free(newNode);
}
