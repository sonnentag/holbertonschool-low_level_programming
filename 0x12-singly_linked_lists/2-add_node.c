#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * _strlen - count characters in array
 * @s: provided value in array
 * Return: length of array
 */
int _strlen(const char *s)
{
	int counter = 0;

	while (s[counter] != '\0')
	{
		counter++;
	}

	return (counter);
}

/**
 * add_node - add a new node at the beginning of a list
 * @head: beginning address
 * @str: provided string
 * Return: address pf new node, or NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_n;

	new_n = malloc(sizeof(list_t));
	if (!new_n)
		return (NULL);
	new_n->str = strdup(str);
	new_n->len = _strlen(str);
	new_n->next = *head;
	*head = new_n;

	return (new_n);
}
