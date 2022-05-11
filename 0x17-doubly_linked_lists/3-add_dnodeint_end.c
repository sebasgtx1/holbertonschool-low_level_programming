#include "lists.h"

/**
 * add_dnodeint_end - adds a new node
 * at the end of a doubly list
 * @head: head of the linked list
 * @n: int to store in the list
 * Return: address to the head
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_h, *temp;

	new_h = malloc(sizeof(dlistint_t));
	if (!new_h)
		return (NULL);

	new_h->n = n;
	new_h->next = NULL;
	temp = *head;
	if (!temp)
	{
		*head = new_h;
		new_h->prev = NULL;
	}
	else
	{
		while (temp->next)
			temp = temp->next;
		new_h->prev = temp;
		temp->next = new_h;
	}
	return (*head);
}
