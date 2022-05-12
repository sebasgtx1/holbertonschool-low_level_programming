#include "lists.h"
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
	if (idx == 0 || !*h)
	{
		return (add_dnodeint(h, n));
	}
	for (; index < idx - 1 && temp; index++)
	{
		temp = temp->next;
		size++;
	}
	if (idx > size)
		return (add_dnodeint_end(h, n));
	if ((!*h && idx > 0) || (int)idx < 0)
		return (NULL);
	newn = malloc(sizeof(dlistint_t));
	if (!newn)
		return (NULL);
	newn->n = n;
	if (!temp->next || !temp)
	{
		newn = add_dnodeint_end(h, n);
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
