#include "lists.h"
/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 * @head: pinter to the head list
 * @idx:index of the list where the new node should be added.
 * Index starts at 0
 * @n: number to be add to the index node
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newn, *temp;
	unsigned int index = 0;

	temp = *head;

	if (idx > 0)
	{
		for (; index < idx - 1; index++)
			temp = temp->next;
	}
	if (!head && idx > 0)
		return (NULL);
	newn = malloc(sizeof(listint_t));
	if (!newn)
		return (NULL);
	newn->n = n;
	if (idx == 0)
	{
		newn->next = *head;
		*head = newn;
	}
	else
	{
		newn->next = temp->next;
		temp->next = newn;
	}
	return (newn);
}
