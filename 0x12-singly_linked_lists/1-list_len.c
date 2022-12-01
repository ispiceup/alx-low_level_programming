#include "lists.h"

/* 
* list_len - function that returns the number of elements in a linked
* @h: singly linked list
* Return: number of elements in a linked list
*/
size_t list_len(const list_t *h)
{
	int j;

	for (j = 0; h; j++)
		h = h->next;
	return (j);
}
