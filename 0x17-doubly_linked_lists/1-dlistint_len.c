#include "lists.h"
/**
 * dlistint_len - returns the number of elements
 * of a doubly linked list
 * @h: linked list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
