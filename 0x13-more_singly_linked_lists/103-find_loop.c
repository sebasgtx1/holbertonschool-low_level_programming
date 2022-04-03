#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: head of a list
 * Return: the address of the node where the loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *loop_c;
	listint_t *a_u;

	loop_c = head;
	a_u = head;
	while (head && loop_c && loop_c->next)
	{
		head = head->next;
		loop_c = loop_c->next->next;

		if (head == loop_c)
		{
			head = a_u;
			a_u =  loop_c;
			while (1)
			{
				loop_c = a_u;
				while (loop_c->next != head && loop_c->next != a_u)
				{
					loop_c = loop_c->next;
				}
				if (loop_c->next == head)
					break;

				head = head->next;
			}
			return (loop_c->next);
		}
	}

	return (NULL);
}
