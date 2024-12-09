#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 *
 * @h: pointer
 *
 * Return: Value of len.
 */

size_t list_len(const list_t *h)
{
	size_t element = 0;

	while (h != NULL)
	{
		element++;
		h = h->next;
	}

	return (element);
}
