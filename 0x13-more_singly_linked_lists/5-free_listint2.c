#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - free a linked list of integers
 * @head: beginning address
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp_n;

	if (!head)
		return;

	while (*head)
	{
		tmp_n = *head;
		*head = (*head)->next;
		free(tmp_n);
	}
}
