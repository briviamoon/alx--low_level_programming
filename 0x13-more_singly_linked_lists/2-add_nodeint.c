#include "lists.h"

/**
 * add_nodeint - adds new node at begining of list
 * @head: poiter to 1st node
 * @n: int element in list
 * Return: pointer to new node.
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
