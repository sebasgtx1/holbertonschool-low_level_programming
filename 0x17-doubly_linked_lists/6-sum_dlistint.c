#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n) of
 * a doubly linked list
 * @head: linked list
 * Return: 0 if the list if empty or the sum of the
 * elements of the list
 */
int sum_dlistint(dlistint_t *head)
{
	int add = 0;

	while (head)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
