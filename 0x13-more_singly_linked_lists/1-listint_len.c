#include "lists.h"
/**
 * listint_len - returns the number of elements
 * of a listint_t list
 * @h: linked list
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
