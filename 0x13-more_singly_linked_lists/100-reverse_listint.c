#include "lists.h"
/**
 * reverse_listint - function that reverses a listint_t linked list
 * @head: linked list to be reverse
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previus_node = NULL;
	listint_t *next_node = NULL;

	if (head)
	{
		while (*head)
		{
			next_node = (*head)->next;
			(*head)->next = previus_node;
			previus_node = *head;
			*head = next_node;
		}
	*head = previus_node;
	}
	return (*head);
}
