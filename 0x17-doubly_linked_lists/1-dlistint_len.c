#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - return length of a dlistint_t list
 * @h: head of list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t ret = 0;

	while (h)
	{
		h = h->next;
		ret++;
	}

	return (ret);
}
