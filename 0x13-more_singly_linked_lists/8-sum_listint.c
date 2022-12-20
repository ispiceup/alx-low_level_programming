#include "lists.h"
/**
  * sum_listint - the sum of all the data (n) of a listint_t linked list.
  * @head: pointer to the head of the list
  * Return:the sum of all the data (n)
  */
int sum_listint(listint_t *head)
{
	int sum;

	for (sum = 0; head; sum += head->n, head = head->next)
		;
	return (sum);
}
