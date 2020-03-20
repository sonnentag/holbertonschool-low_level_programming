#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free a linked list
 * @head: beginning address
 * Return
 */
void free_list(list_t *head)
{
	list_t *tmp_n;

	while (head)
	{
		tmp_n = *head;
		head = head->next;
		free(tmp_n->str);
		free(tmp_n);
	}
	free(head);
}
