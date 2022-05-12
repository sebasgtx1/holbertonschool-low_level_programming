#include "lists.h"
/**
 * delete_dnodeint_at_index - function that deletes the node
 * at index index of a doubly linked list
 * @head: pointer to the head list
 * @index: index number to be deleted
 * Return: 1 if it succeeded or -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *pre_index, *post_index;

	pre_index = *head;

	if (index > 0 && pre_index)
	{
		for (; i < (index - 1) && pre_index; i++)
			pre_index = pre_index->next;
	}
	if (!pre_index || (!pre_index->next && index > 0))
		return (-1);

	post_index = pre_index->next;

	if (index == 0)
	{
		free(pre_index);
		*head = post_index;
		if (*head)
			(*head)->prev = NULL;
	}
	else
	{
		pre_index->next = post_index->next;
		if (post_index->next)
			post_index->next->prev = pre_index;
		free(post_index);
	}
	return (1);
}
