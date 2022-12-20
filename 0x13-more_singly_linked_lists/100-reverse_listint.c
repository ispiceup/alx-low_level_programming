#include "lists.h"
/**
  * reverse_listint - function that reverses a listint_t linked list.
  * @head: 
  * Return: a pointer to the first node of the reversed list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *hold;
	listint_t *current;

	if (*head == NULL)
		return (NULL);

	current = *head;
	*head = current->next;
	hold = (*head)->next;
	current->next = NULL;
	if (*head == NULL)
	{
		*head = current;
		return (current);
	}

	while (hold != NULL)
	{
		(*head)->next = current;
		current = *head;
		*head = hold;
		hold = (*head)->next;
	}

	(*head)->next = current;
	return (*head);
}
