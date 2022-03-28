#include "lists.h"
/**
 * list_len - returns the number of elements in a list
 * @h: linked list
 * Return: number of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
