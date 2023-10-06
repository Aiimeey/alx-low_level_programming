#include "hash_tables.h"
/**
 * hash_table_get - Retrieves the value associated with a given key in the ht
 * @ht: The hash table to search for the key-value pair
 * @key: The key to look up (cannot be an empty string)
 *
 * Return: The value associated with the key if found, NULL if not found
 *         or if the hash table or key is invalid
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *ptr = NULL;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	ptr = ht->array[index];

	while (ptr != NULL)
	{
		if (strcmp(ptr->key, key) == 0)
		{
			return (ptr->value);
		}
		ptr = ptr->next;
	}

	return (NULL);
}
