#include "lists.h"

/**
 * sum_listint - returns the sum of all the data in a listint_t linked list
 * @head: the head of the list
 *
 * Return: the sum of all n's
 */

int sum_listint(listint_t *head)
{
	int i = 0;

	for (; head != NULL;)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
