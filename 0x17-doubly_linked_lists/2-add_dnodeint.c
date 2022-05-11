#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning
 * of a doubly linked list.
 * @head: head of the linked list.
 * @n: int to store in the list.
 * Return: address of the new head.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_h;

	new_h = malloc(sizeof(dlistint_t));
	if (!new_h)
		return (NULL);
	new_h->n = n;
	new_h->next = *head;
	new_h->prev = NULL;
	if (*head)
		(*head)->prev = new_h;
	*head = new_h;
	return (*head);
}
