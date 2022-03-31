#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @n: int to store in the list.
 * Return: address of the head.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_h;

	new_h = malloc(sizeof(listint_t));
	if (!new_h)
		return (NULL);
	new_h->n = n;
	new_h->next = *head;
	*head = new_h;
	return (*head);
}
