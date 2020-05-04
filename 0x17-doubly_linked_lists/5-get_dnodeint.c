#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: head of provided list
 * @index: index to return
 * Return: nth node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int c = 0;

	if (!head)
		return (NULL);

	while (head)
	{
		if (c == index)
			break;
		c++;
		head = head->next;
	}

	return (head);
}
