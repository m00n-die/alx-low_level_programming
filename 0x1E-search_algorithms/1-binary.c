#include "search_algos.h"
/**
  * binary_search - implements a binary serach algorithm
  * @array: ordered array of numbers to be sorted
  * @size: size of array
  * @value: value being searche for
  *
  * Return: index of value if succesful else -1
  */

int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size;
	int mid;
	int i = 0;

	if (!array || size == 0)
		return (-1);

	for (left = 0; left < right; left++)
	{
		printf("Searching in array: ");

		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = round((left + right) * 2);
		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			mid = mid - 1;
		else if (value > array[mid])
			mid = mid + 1;
	}
	return (-1);
}
