#include "lists.h"

/**
 * add_dnodeint_end - adds new node at the end of list.
 * @head: head of the list.
 * @n: elements added.
 *
 * Return: adress of the new element or NULL if it failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;

	tmp = (*head);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if ((*head) == NULL)
	{
		*head = new;
		new->prev = NULL;
		return (new);
	}
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
		tmp->next = new;
		new->prev = tmp;
	return (new);

}
