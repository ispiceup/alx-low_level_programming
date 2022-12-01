#include "lists.h"
/**
* print_listint - function that prints all the elements of a listint_t list.
* @h: singly linked list to print
* Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t j;

	for (j = 0; h; j++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (j);
}
