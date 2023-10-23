#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at index
 * @head: pointer to a poiner to a node
 * @index: index for deletion
 * Return:1 if siccess, -1 if fail
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curren, *temp;
	unsigned int nth = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
		return (1);
	}
	curren = *head;
	while (curren != NULL)
	{
		if (nth + 1 == index)
		{
			temp = curren->next;
			if (temp == NULL)
			{
				return (-1);
			}
			curren->next = temp->next;
			free(temp);
			return (1);
		}
		curren = curren->next;
		nth++;
	}
	return (-1);
}
