#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: size of the array
 * Return: a pointer to the newly created hash table or
 * NULL if something went wrong
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *my_table;
	hash_node_t **array;
	unsigned long int i = 0;

	my_table = malloc(sizeof(hash_table_t));
	if (!my_table)
		return (NULL);

	array = malloc(size * (sizeof(hash_node_t *)));
	if (!array)
		return (NULL);

	for (; i < size; i++)
		array[i] = NULL;
	my_table->size = size;
	my_table->array = array;
	return (my_table);
}
