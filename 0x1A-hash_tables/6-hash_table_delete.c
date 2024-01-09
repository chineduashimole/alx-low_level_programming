#include "hash_tables.h"

/**
 * hash_table_delete - this function deletes a hash table.
 * @ht: A pointer to a hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *node, *tmp_n;
	unsigned long int a;

	for (a = 0; a < ht->size; a++)
	{
		if (ht->array[a] != NULL)
		{
			node = ht->array[a];
			while (node != NULL)
			{
				tmp_n = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmp_n;
			}
		}
	}
	free(head->array);
	free(head);
}
