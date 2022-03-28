#include "lists.h"

/**
 * add_node_end - adds a new node
 * at the end of a list_t list
 * @head: head of the linked list
 * @str: string to store in the list
 * Return: address to the head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_h, *temp;
	size_t strlen = 0;

	new_h = malloc(sizeof(list_t));
	if (new_h == NULL)
		return (NULL);

	new_h->str = strdup(str);
	for (; str[strlen]; strlen++)
		;

	new->len = strlen;
	new->next = NULL;
	temp = *head;
	if (!temp)
	{
		*head = new;
	}
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}
	return (*head);
}
