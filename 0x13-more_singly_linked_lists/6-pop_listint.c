#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the linked list
 * Return: 0 if the linked list is empty or
 * the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *value;
	int n;

	value = *head;
	n = value->n;
	if (*head == NULL)
		return (0);

	n = (*head)->n;
	temp = (*head)->next;
	*head = temp;
	free(value);
	return (n);
}
