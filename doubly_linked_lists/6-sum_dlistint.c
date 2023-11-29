#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a list.
 * @head: pointer to head of the list.
 *
 * Return: the sum of data.
*/

int sum_dlistint(dlistint_t *head)
{
	int sum;

	for (sum = 0; head != NULL;)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
