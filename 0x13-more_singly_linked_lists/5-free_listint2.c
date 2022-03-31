#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and set the head to NULL
 * @head: pinter to the list to be free it
 * Return: no return
 */
void free_listint2(listint_t **head)
{
	listint_t *headp;

	while ((headp = *head))
	{
		*head = (*head)->next;
		free(headp);
	}
	*head = NULL;
}
