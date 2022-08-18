#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: the head of the list
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		free(head);
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
		}
}
