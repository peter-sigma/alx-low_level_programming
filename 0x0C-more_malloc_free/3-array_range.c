#include "main.h"
#include <stdlib.h>
/**
 * array_range - A function to create an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *pointer;
	int i = 0, array_value = min;

	if (min > max)
	{
		return (NULL);
	}
	pointer = malloc((max - min + 1) * sizeof(int));
	if (pointer == NULL)
	{
		return (NULL);
	}
	for (; i <= (max - min); i++)
	{
		pointer[i] = array_value;
		array_value++;
	}
	return (pointer);
}


