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
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	current = *head;
	while (current != NULL)
	{
		if (nth == idx)
		{
			newNode->next = current->next;
			current->next = newNode;
			return (newNode);
		}
		current = current->next;
		nth++;
	}
	return (NULL);
}
