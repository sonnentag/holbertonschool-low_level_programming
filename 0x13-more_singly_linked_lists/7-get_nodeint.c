#include "lists.h"

/**
 * get_nodeint_at_index - get nth element in list
 * @head: beginning of list
 * @index: place in list
 * Return: element
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int c = 0;
	listint_t *new_n;

	new_n = head;
	while (c < index)
	{
		if (!new_n->next)
			return (NULL);

		new_n = new_n->next;
		c++;
	}

	return (new_n);
}
