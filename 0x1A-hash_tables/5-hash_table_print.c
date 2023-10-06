#include "hash_tables.h"
/**
 * hash_table_print - Prints the key-value pairs stored in a hash table.
 * @ht: A pointer to the hash table to be printed.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *ptr;
	unsigned long int i;
	int check = 1;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size ; i++)
	{
		ptr = ht->array[i];
		while (ptr)
		{
			if (!check)
				printf(", ");
			printf("'%s': '%s'", ptr->key, ptr->value);
			check = 0;
			ptr = ptr->next;

		}

	}
	printf("}\n");
}
