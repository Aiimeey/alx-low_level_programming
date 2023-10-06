#include "hash_tables.h"

/**
 * key_index - Returns the index at which a key should be stored in the array
 *
 * @key: The key to be hashed and stored
 * @size: The size of the array
 *
 * Return: The index at which the key should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int index;
	unsigned long int k;

	if (key == NULL || size == 0)
		return (0);

	k = hash_djb2(key);
	index = k % size;

	return (index);
}
