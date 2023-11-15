#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - return a pointer with a copy of a string.
 * @str: string copied
 *
 * Return: pointer to new string.
 */

char *_strdup(char *str)
{
	char *a;
	unsigned int i, size = 0;

	if (str == NULL)
		return (NULL);
	while (str[size] != '\0')
		size++;

	a = malloc((size + 1) * sizeof(char));

	if (a == NULL)
		return (NULL);

	for (i = 0; i <= size; i++)
		a[i] = str[i];
	return (a);
}


/**
 * *new_dog - creates a new dog.
 *
 * @name: dog's name.
 * @age: dog's age.
 * @owner: dog's owner.
 *
 * Return: new dog.
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = _strdup(name);
	dog->owner = _strdup(owner);

	if (dog->name == NULL || dog->owner == NULL)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
		return (NULL);
	}

	dog->age = age;

	return (dog);
}
