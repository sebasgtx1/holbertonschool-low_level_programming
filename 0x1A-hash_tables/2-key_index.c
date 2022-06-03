#include "hash_tables.h"
/**
 * key_index - funtion that gives the key index for a string
 * @key: string to get the key_index
 * @size: size of the hash table
 * Return: the key index for the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
