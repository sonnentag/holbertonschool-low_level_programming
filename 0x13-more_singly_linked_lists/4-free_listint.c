#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free a linked list of integers
 * @head: beginning address
 */
void free_listint(listint_t *head)
{
	listint_t *tmp_n;

	while (head)
	{
		tmp_n = head;
		head = head->next;
		free(tmp_n);
	}
}
