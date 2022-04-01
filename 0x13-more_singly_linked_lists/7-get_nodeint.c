#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: linked list
 * @index: index of the node, starting at 0
 * Return: return the nth node or NULL if the node does't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;

	for (; n < index && head; n++)
		head = head->next;
	return (head);
}
