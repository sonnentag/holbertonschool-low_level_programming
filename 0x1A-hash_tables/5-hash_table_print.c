#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - print a hash table
 * @ht: hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx = 0;
	hash_node_t *tmparr = NULL;
	int start = 0;

	if (!ht)
		return;

	printf("{");
	while (idx < ht->size)
	{
		tmparr = ht->array[idx];
		while (tmparr)
		{
			if (start == 1)
				printf(", ");
			start = 1;
			printf("'%s': '%s'", tmparr->key, tmparr->value);
			tmparr = tmparr->next;
		}
		idx++;
	}
	printf("}\n");
}
