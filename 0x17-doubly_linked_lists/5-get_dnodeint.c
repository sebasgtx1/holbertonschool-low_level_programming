#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of
 * a doubly linked list
 * @head: linked list
 * @index: index of the node, starting at 0
 * Return: return the nth node or NULL if the node does't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;

	for (; n < index && head; n++)
		head = head->next;
	return (head);
}
