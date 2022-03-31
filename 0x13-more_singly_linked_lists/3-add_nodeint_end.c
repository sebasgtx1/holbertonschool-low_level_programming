#include "lists.h"

/**
 * add_nodeint_end - adds a new node
 * at the end of a listint_t list
 * @head: head of the linked list
 * @n: int to store in the list
 * Return: address to the head
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_h, *temp;

	new_h = malloc(sizeof(listint_t));
	if (!new_h)
		return (NULL);

	new_h->n = n;
	new_h->next = NULL;
	temp = *head;
	if (!temp)
	{
		*head = new_h;
	}
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = new_h;
	}
	return (*head);
}
