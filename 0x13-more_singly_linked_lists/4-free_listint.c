#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pinter to the list to be free it
 * Return: no return
 */
void free_listint(listint_t *head)
{
	listint_t *headp;

	while ((headp = head))
	{
		head = head->next;
		free(headp);
	}
}
