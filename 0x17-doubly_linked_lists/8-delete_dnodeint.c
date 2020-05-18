#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes a dlist node
 * @head: address of var pointing to head
 * @index: node to delete
 *
 * Return: 1 on success
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node, *tmp;
	unsigned int count = 0;

	if ((!head) || (!*head))
		return (-1);

	node = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(node);
	}
	else
	{
		while (count < index - 1)
		{
			node = node->next;
			if (node->next == NULL)
				return (-1);
			count++;
		}

		tmp = node->next;
		node->next = node->next->next;

		free(tmp);
	}

	return (0);
}
