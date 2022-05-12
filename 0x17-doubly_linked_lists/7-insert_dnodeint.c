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
	unsigned int index = 0;

	temp = *h;

	if (idx > 0 && temp)
	{
		for (; index < idx - 1 && temp; index++)
			temp = temp->next;
	}
	if (!temp && idx > 0)
		return (NULL);
	newn = malloc(sizeof(dlistint_t));
	if (!newn)
		return (NULL);
	newn->n = n;
	if (idx == 0)
	{
		newn->next = *h;
		newn->prev = NULL;
		(*h)->prev = newn;
		*h = newn;
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
