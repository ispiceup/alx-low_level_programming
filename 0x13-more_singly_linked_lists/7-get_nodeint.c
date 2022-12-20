#include "lists.h"
/**
  * get_nodeint_at_index - returns the nth node of the linked list
  * @head: head of the list
  * @index: index of the node starting at zero
  * Return: if the node does not exist, return NULL
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int d;

	d = 0;
	while (d < index)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		d++;
	}
	return (head);
}
