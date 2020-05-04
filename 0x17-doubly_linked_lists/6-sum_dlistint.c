#include "lists.h"

/**
 * sum_dlistint - returns the sum of all elements of a dlistint_t linked list
 * @head: provided list
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int ret = 0;

	if (!head)
		return (0);

	while (head)
	{
		ret += head->n;
		head = head->next;
	}

	return (ret);
}
