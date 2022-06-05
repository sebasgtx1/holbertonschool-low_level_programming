#include "hash_tables.h"
#include <string.h>
#include <stdio.h>
/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: has table
 * @key: key
 * @value: value is the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 * In case of collision, add the new node at the beginning of the list
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *temp;
	unsigned long int key_i;

	if (!ht || !key || !value)
		return (0);
	if (*key == '\0')
		return (0);

	key_i = key_index((unsigned char *)key, ht->size);
	temp = ht->array[key_i];

	while (temp)
	{
		/* Update the value*/
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
		}
		/* going throught the table*/
		temp = temp->next;

	}
	/* new node has to be created with the given attributes*/
	/* because the key does not exist or because is a collision case */
	temp = malloc(sizeof(hash_node_t));
	if (!temp)
	{
		free(temp);
		return (0);
	}
	temp->key = strdup(key);
	temp->value = strdup(value);
	temp->next =  ht->array[key_i];
	ht->array[key_i] = temp;
	return (1);
}
