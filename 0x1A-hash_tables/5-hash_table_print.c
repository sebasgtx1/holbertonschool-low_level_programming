#include "hash_tables.h"

/**
 * hash_table_print -  function that prints a hash table
 * @ht: hash table
 * Return: no return
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *aux;
	unsigned long int i = 0;
	char *com = "";

	if (ht == NULL)
		return (NULL);

	printf("{");
	while (i < ht->size)
	{
		aux = ht->array[i];
		while (aux)
		{
			printf("%s\'%s\': \'%s\'", com, aux->key, aux->value);
			com = ", ";
			aux = aux->next;
		}
		i++;
	}
	printf("}\n");
}
