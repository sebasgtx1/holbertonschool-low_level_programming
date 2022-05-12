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
/**
 * insert_dnodeint_at_index -  inserts a new node at a given position
 * @h: pinter to the head list
 * @idx:index of the list where the new node should be added.
 * Index starts at 0
 * @n: number to be add to the index node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newn, *temp;
	unsigned int index = 0, size = 0;

	temp = *h;

	if (!h || (int)idx < 0)
	{
		return (NULL);
	}
	if ((int)idx > 0 && temp)
	{
		for (; index < idx - 1 && temp; index++)
			temp = temp->next;
	}
	size = dlistint_len(*h);
	newn = malloc(sizeof(dlistint_t));
	if (!newn)
		return (NULL);
	newn->n = n;
	if (idx == 0)
		return (add_dnodeint(h, n));
	else if (idx >= size)
	{
		return (add_dnodeint_end(h, n));
	}
	else
	{
		newn->next = temp->next;
		temp->next = newn;
		temp->next->next->prev = newn;
		newn->prev = temp;
	}
	return (newn);
}
