#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - add a new node at the end of a list
 * @head: beginning address
 * @n: provided string
 * Return: address of new node, or NULL on failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_n, *tmp_n;

	new_n = malloc(sizeof(listint_t));
	if (!new_n)
		return (NULL);
	new_n->n = n;

	if (!*head)
	{
		new_n->next = *head;
		*head = new_n;
	}
	else
	{
		new_n->next = NULL;
		tmp_n = *head;
		while (tmp_n->next)
			tmp_n = tmp_n->next;
		tmp_n->next = new_n;
	}
	return (new_n);
}
