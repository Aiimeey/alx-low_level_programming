#include "hash_tables.h"
/**
 * hash_table_delete - Deletes a hash table.
 * @ht: Pointer to the hash table to be deleted.
 *
 * This function deallocates the memory used by a hash table, including all
 * of its nodes and their associated keys and values.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *ptr, *current;
	unsigned int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		ptr = ht->array[i];

		while (ptr)
		{
			current = ptr;
			ptr = ptr->next;
			free(current->key);
			free(current->value);
			free(current);

		}
	}
	free(ht->array);
	free(ht);
}
