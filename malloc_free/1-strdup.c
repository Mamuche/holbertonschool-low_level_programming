#include "main.h"
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
