#include "lists.h"
#include <string.h>

/**
 * add_node - function adds a new node at the beginning of a list_t list.
 * @head: input
 * @str: string needs to be duplicated
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t len = 0;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	while (str[len])
		len++;
	new->len = len;

	new->str = strdup(str);
	if (!(*head))
		new->next = NULL;
	else
		new->next = *head;
	*head = new;

	return (*head);
}
