#include "search_algos.h"

/**
* linear_search - searches for a value in an array
* of integers using the Linear search algorithm
*
* @array: array to search the value in
* @size: size of the array
* @value: value to look for
*
* Return: the index of the found value,
* or -1 if not found
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			/* printf("Found %d at index: %lu\n", array[i], i); */
			return (i);
		}
	}

	return (-1);

}
