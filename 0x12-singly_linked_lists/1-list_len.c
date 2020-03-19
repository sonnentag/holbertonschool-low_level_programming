#include <stdlib.h>
#include "lists.h"

/**
 * list_len - print the number of elements in a linked list
 *
 * @h: pointer to head of list
 * Return: result
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}

	return (n);
}
