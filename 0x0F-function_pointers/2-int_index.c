#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: array to search from
 * @size: size of array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: index of first element for which cmp function does not return 0,
 * or -1 if no element matches or size <= 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]) == 1)
			return (x);
	}
	return (-1);
}

