#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list.
 * @head: head of the list.
 * @str: pointer to the string.
 *
 * Return: adress of the new element or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	for (; str[len]; len++)
		;
	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	*head = new;

	return (new);
}
