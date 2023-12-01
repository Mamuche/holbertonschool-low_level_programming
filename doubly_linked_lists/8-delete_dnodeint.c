#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a list.
 * @head: head of list.
 * @index: index of the node should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *del, *tmp = *head;
	unsigned int i;

	if (tmp == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if ((*head) != NULL)
			(*head)->prev == NULL;
		free(tmp);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (tmp->next == NULL)
			return (-1);
		tmp = tmp->next;
	}

	del = tmp->next;
	tmp->next = del->next;
	if (del->next != NULL)
		del->next->prev = tmp;
	free(del);
	return (1);
}
