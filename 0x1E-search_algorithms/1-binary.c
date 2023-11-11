#include "search_algos.h"

/**
  * binary_search - Searches for a value in a sorted array
  * @array: pointer to an array
  * @size: The number of elements in the array.
  * @value: The value to search for.
  * Return: if NULL, -1 or index located
  */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	/* Return -1 if empty */
	if (array == NULL)
		return (-1);

	/* search using binary search*/
	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	/* return -1 if the element is not found */
	return (-1);
}
