#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pinter to the list to be free it
 * Return: no return
 */
void free_list(list_t *head)
{
	list_t *headp;

	while ((headp = head))
	{
		head = head->next;
		free(headp->str);
		free(headp);
	}
}
