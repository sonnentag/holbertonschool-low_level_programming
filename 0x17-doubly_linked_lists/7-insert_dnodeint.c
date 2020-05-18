#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - insert element into dlist node at index
 *
 * @h: head of dlist
 * @idx: index of element to be inserted
 * @n: data to insert
 *
 * Return: Address of new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new;
	unsigned int c = 0;

	if ((!h) || (!*h))
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}
	new->n = n;

	temp = *h;

	if (idx == 0)
	{
		new->next = temp;
		new->prev = NULL;
		*h = new;
	}
	else
	{
		while (temp)
		{
			if (c == idx - 1)
			{
				new->next = temp->next;
				temp->next = new;
				break;
			}
			c++;
			temp = temp->next;
		}
	}
	return (new);
}
