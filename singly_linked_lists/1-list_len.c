#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list.
 * @h: pointer to the list.
 *
 * Return: number of elements.
 */

size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
