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
 * add_node_end - add a new node at the end of a list
 * @head: beginning address
 * @str: provided string
 * Return: address pf new node, or NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_n;
	list_t *tmp_n;

	new_n = malloc(sizeof(list_t));
	if (!new_n)
		return (NULL);
	new_n->str = strdup(str);
	new_n->len = _strlen(str);
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
