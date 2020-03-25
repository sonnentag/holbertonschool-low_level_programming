#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free a linked list
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
