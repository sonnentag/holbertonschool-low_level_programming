#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add a new node at the beginning of a list
 * @head: beginning address
 * @n: provided int
 * Return: address of new node, or NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_n;

	new_n = malloc(sizeof(listint_t));
	if (!new_n)
		return (NULL);
	new_n->n = n;
	new_n->next = *head;
	*head = new_n;

	return (new_n);
}
