#include "lists.h"
/**
 * free_listp4 - frees a listint_t list and set the head to NULL
 * @head: pinter to the list to be free it
 * Return: no return
 */
void free_listp4(list_p **head)
{
	list_p *headp;

	if (head)
	{
	while ((headp = *head))
	{
		*head = (*head)->next;
		free(headp);
	}
	*head = NULL;
	}
}
/**
 * free_listint_safe - frees a linked list.
 * @h: head of a list.
 *
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nodes = 0;
	list_p *a_u, *a_h, *a_c;
	listint_t *hp;

	a_u = NULL;
	while (*h)
	{
		a_h = malloc(sizeof(list_p));

		if (!a_c)
			exit(98);

		a_h->address = (void *)*h;
		a_h->next = a_u;
		a_u = a_h;

		a_c = a_u;

		while (a_c->next)
		{
			a_c = a_c->next;
			if (*h == a_c->address)
			{
				*h = NULL;
				free_listp4(&a_u);
				return (nodes);
			}
		}

		hp = *h;
		*h = (*h)->next;
		free(hp);
		nodes++;
	}

	*h = NULL;
	free_listp4(&a_u);
	return (nodes);
}
