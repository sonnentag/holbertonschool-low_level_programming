#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print the list of integers in a struct
 *
 * @h: pointer to head of list
 * Return: count of elements
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);

		h = h->next;
		n++;
	}

	return (n);
}
