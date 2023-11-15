#include "function_pointers.h"
#include <sdtio.h>

/**
 * int_index - function that searches for an integer.
 *
 * @array: pointer to the array.
 * @size: number of elements in the array.
 * @cmp: pointer to the function to compares values.
 *
 * Return: the index of the element or,
 * -1 if no element matches,
 * -1 if size <= 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{


}
