#include "search_algos.h"

/**
  * recursiveBinarySearch - implements a recursive binary search algorithm
  * @array: ordered array to be searched
  * @left: start of the array
  * @right: end of the array
  * @element: element being searched for
  *
  * Return: Index of element
  */

int recursiveBinarySearch(int *array, size_t left, size_t right, int element)
{
	size_t i = 0;
	size_t middle = (left + (right - left) / 2);


	if (array == NULL || right == 0)
		return (-1);
	if (left < right)
	{
		printf("Searching in array: ");

		for (i = left; i < right - 1; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		if (array[middle] == element)
			return (middle);
		if (array[middle] > element)
			return (recursiveBinarySearch(array, left, middle - 1, element));
		return (recursiveBinarySearch(array, middle + 1, right, element));
	}
	return (-1);
}

/**
  * binary_search - implements a binary search algorithm
  * @array: ordered array to be searched
  * @size: size of array
  * @value: value to eb searched for
  *
  * Return: index on success
  */

int binary_search(int *array, size_t size, int value)
{
	int index = recursiveBinarySearch(array, 0, size, value);

	if (index == -1)
		return (-1);
	return (index);
}
