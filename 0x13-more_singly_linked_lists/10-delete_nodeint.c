#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node at index of a listint_t
 * @head: head of linked list
 * @index: index of node to be delete, starting at 0
 * Return: 1 if succeeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *hold;
	unsigned int j;

	j = 0;
	current = *head;
	if (*head == NULL)
		return (-1);

	while (j < index)
	{
		j++;
		hold = current;
		if (current->next)
			current = current->next;
		else
			return (-1);
	}

	if (index == 0)
		*head = current->next;
	else if (current->next)
		hold->next = current->next;
	else
		hold->next = NULL;

	free(current);
	return (1);
}
