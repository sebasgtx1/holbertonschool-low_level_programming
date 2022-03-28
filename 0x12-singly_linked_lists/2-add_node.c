#include "lists.h"
/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_h;
	size_t strlen = 0;

	new_h = malloc(sizeof(list_t));
	if (!new_h)
		return (NULL);

	new_h->str = strdup(str);
	for (; str[strlen]; strlen++)
		;
	new_h->len = strlen;
	new_h->next = *head;
	*head = new_h;
	return (*head);
}
