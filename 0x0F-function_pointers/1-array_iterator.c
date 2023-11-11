#include "function_pointers.h"
#include <stdlib.h>
#include<stdio.h>
/**
 * array_iterator - function to itterate function array
 * @array: an array to itterate
 * @size: size of an array
 * @action: callback function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
