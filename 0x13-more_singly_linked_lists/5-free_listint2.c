#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: is the head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *temp1;

	if (head != NULL)
	{
		temp1 = *head;

		while ((temp = temp1) != NULL)
		{
			temp1 = temp1->next;
			free(temp);
		}
		*head = NULL;
	}
}
