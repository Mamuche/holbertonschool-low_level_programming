#include "lists.h"

/**
 * print_list - prints all the elements of a list.
 * @h: pointer to list.
 *
 * Return: the number of nodes.
 */

size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		count++;
	}
	return (count);
}
		
