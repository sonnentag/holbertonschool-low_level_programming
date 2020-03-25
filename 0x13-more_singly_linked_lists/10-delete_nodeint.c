#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - delete nth element from list
 * @head: beginning of list
 * @index: place of element to delete
 * Return: 1 or -1 on failure 
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int c = 1;
	listint_t *temp, *new_n;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;

		return (1);
	}
	new_n = *head;
	while (c < index)
	{
		if (!new_n)
			return (-1);

		new_n = new_n->next;
		c++;
	}
	temp = new_n->next;
	new_n->next = temp->next;
	free(temp);

	return (1);
}
