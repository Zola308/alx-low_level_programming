#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: t singly linked list
 *
 * Return: returns the number of elements
 */

size_t list_len(const list_t *h)
{
	size_t x;

	x = 0;
	while (h != NULL)
	{
		h = h->next;
		x++;
	}
	return (x);
}
