#include "lists.h"
#include <stdlib.h>
/**
  * pop_listint - deletes the head of a node and returns node's data
  * @head: head
  * Return: data  of head
  */
int pop_listint(listint_t **head)
{
	int d;
	listint_t *current, *tmp;

	if (head == NULL)
		return (0);
	tmp = current = *head;
	if (*head)
	{
		d = current->n;
		*head = current->next;
		free(tmp);
	}
	else
		d = 0;
	return (d);
}
