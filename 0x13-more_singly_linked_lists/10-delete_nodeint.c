#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node
 * at index index of a listint_t linked list
 * @head: pointer to the head list
 * @index: index number to be deleted
 * Return: 1 if it succeeded or -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *pre_index, *post_index;

	pre_index = *head;

	if (index > 0)
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
	}
	else
	{
		pre_index->next = post_index->next;
		free(post_index);
	}
	return (1);
}
