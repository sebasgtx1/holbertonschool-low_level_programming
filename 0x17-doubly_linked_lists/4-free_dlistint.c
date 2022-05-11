#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: pinter to the list to be free it
 * Return: no return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *headp;

	while ((headp = head))
	{
		head = head->next;
		free(headp);
	}
}
