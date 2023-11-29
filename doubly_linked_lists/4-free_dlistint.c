#include "lists.h"

/**
 * free_dlistint - frees a list.
 * @head: pointer to list.
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
