#include "hash_tables.h"

/**
 * key_index - Gets the index at which a key.
 * @key: Key to get the index of.
 * @size: Size of the array of the hash table.
 *
 * Return: The index of the key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
