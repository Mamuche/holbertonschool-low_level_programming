#include "lists.h"

/**
 * print_dlistint - prints all elements of a list.
 * @h: pointer to list.
 *
 * Return: the number of nodes.
*/

size_t print_dlistint(const dlistint_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		if (h->n)
			printf("%u\n", h->n);

		h = h->next;
		count++;
	}

	return (count);
}
