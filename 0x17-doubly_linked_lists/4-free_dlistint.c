#include "lists.h"

/**
 * free_dlistint - free a dlistint_t list
 * @head: list to free
 * Return: list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
