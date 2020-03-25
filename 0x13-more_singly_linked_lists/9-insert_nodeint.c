#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert int to place in list
 * @head: beginning of list
 * @idx: index / place
 * @n: int to insert
 * Return: address to updated list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int c = 1;
	listint_t *temp, *new_n;

	if (!head)
		return (NULL);
	new_n = *head;
	while (c < idx)
	{
		new_n = new_n->next;
		if (!new_n)
			return (NULL);
		c++;
	}
	temp = malloc(sizeof(listint_t));
	if (!temp)
		return (NULL);

	temp->n = n;
	temp->next = NULL;
	if (idx == 0)
	{
		temp->next = new_n;
		*head = temp;
		return (*head);
	}
	else
	{
		temp->next = new_n->next;
		new_n->next = temp;
	}

	return (new_n);
}
