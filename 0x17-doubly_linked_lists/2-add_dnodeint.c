#include "lists.h"

/**
 * add_dnodeint - add new node at the beginning of a dlistint_t list
 * @head: beginning of list
 * @n: int to add
 * Return: address of new element or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
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
	new->prev = NULL;

	temp = *head;
	*head = new;
	new->next = temp;
	if (temp)
		temp->prev = *head;

	return (new);
}
