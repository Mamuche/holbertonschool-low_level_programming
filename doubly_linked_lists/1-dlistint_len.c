#include "lists.h"

/**
 * dlistint_len - return the number of elements in a linked list.
 * @h: pointer to list.
 *
 * Return: number of node.
*/

size_t dlistint_len(const dlistint_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
