#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - pop int from beginning of list
 * @head: beginning of list
 * Return: val
 */
int pop_listint(listint_t **head)
{
	int val;
	listint_t *topop;

	if (!(*head) || !head)
		return (0);

	topop = (*head)->next;
	val = (*head)->n;

	free(*head);
	*head = topop;

	return (val);
}
