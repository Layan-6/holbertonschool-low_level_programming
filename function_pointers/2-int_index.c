#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array
 * @array: The array to search through
 * @size: The number of elements in the array
 * @cmp: Pointer to the function used to compare values
 *
 * Return: Index of first matching element, or -1 if not found or error
 *
 * Description: Searches for an integer using a comparison function.
 *              Returns index of first element where cmp doesn't return 0.
 *              Returns -1 if size <= 0, or array/cmp is NULL.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
