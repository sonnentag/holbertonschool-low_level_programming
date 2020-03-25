#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - print the sum of all elements in a linked list
 * @head: pointer to head of list
 * Return: result
 */
int sum_listint(listint_t *head)
{
	int n = 0;

	while (head)
	{
		n += head->n;
		head = head->next;
	}

	return (n);
}
