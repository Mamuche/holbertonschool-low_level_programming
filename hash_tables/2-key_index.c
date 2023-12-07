#include "hash_tables.h"

/**
 * key_index - gives the index of a key.
 * @key: the key to give.
 * @size: the size of hash table.
 *
 * Return: the index of key/value was stored.
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL)
		return (0);

	return (hash_djb2(key) % size);
}
