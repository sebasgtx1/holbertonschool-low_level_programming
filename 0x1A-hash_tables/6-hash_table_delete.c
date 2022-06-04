#include "hash_tables.h"
/**
 * free_ll - frees a linked list
 * @head: pinter to the list to be free it
 * Return: no return
 */
void free_ll(hash_node_t *head)
{
	hash_node_t *headp;

	while ((headp = head))
	{
		head = head->next;
		free(headp->key);
		free(headp->value);
		free(headp);
	}
}

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: hash table
 * Return: no return
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *aux;
	unsigned long int i = 0;

	if (ht == NULL)
		return;

	while (i < ht->size)
	{
		aux = ht->array[i];
		free_ll(aux);
		i++;
	}
	free(ht->array);
	free(ht);
}
