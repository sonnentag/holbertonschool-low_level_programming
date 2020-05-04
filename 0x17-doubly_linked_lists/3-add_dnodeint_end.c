#include "lists.h"

/**
 * add_dnodeint_end - add new node at the end of a dlistint_t list
 * @head: beginning of list
 * @n: int to add
 * Return: address of new element or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = NULL, *new = NULL;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}
	new->n = n;

	temp = *head;
	if (!*head)
	{
		*head = new;
		new->prev = NULL;
		return (new);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = new;
	new->prev = temp;
	new->next = NULL;

	return (new);
}
