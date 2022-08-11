#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: the head of the list
 */

void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (temp != NULL)
	{
		head = head->next;
		free(temp->str);
		free(temp);
	}	
}
