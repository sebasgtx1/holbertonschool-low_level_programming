#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: linked list
 * @index: index of the node, starting at 0
 * Return: return the nth node or NULL if the node does't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int n = 0;

	temp = head;
	while (temp->next)
	{
		temp = temp->next;
		n++;
		if (n == index)
			break;
	}
	return (temp);

}
