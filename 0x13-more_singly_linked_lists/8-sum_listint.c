#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of
 * a listint_t linked list
 * @head: listint_t linked list
 * Return: 0 if the list if empty or the sum of the
 * elements of the list
 */
int sum_listint(listint_t *head)
{
	int add = 0;

	while (head)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
