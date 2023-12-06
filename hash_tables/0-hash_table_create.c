#include "hash_tables.h"

/**
 * hash_table_create - create a hash table.
 * @size: size of the array.
 *
 * Return: pointer to the newly created hash table.
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_tab;
	unsigned long int i;

/*create table.*/
	new_tab = malloc(sizeof(hash_table_t));
	if (new_tab == NULL)
		return (NULL);

	new_tab->size = size;
/*create array for each node.*/
	new_tab->array = malloc(sizeof(hash_node_t *) * size);
	if (new_tab->array == NULL)
	{
		free(new_tab);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		new_tab->array[i] = NULL;

	return (new_tab);
}
