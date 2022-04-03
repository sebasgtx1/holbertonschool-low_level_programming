#include "lists.h"
/**
 * free_listint3 - frees a listint_t list and set the head to NULL
 * @head: pinter to the list to be free it
 * Return: no return
 */
void free_listint3(list_p **head)
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
 * print_listint_safe - prints a linked list with a loop
 * @head: linked list to be printed
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	list_p *a_u = NULL, *a_h = NULL, *a_c = NULL;
	/**
	 * a_u:address updater
	 * a_h: address holder
	 * a_c: address checker
	 */
	while (head)
	{
		a_h = malloc(sizeof(list_p));

		if (!a_h)
			exit(98);

		a_h->address = (void *)head;
		a_h->next = a_u;
		a_u = a_h;
		a_c = a_u;

	/**
	 * While for check if a loop exist at this point
	 */
		while (a_c->next)
		{
			a_c = a_c->next;

			if (head == a_c->address)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(a_h);
				return (nodes);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nodes++;
	}
	free(a_h);
	return (nodes);
}
