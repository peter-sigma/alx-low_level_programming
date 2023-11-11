#include "function_pointers.h"
/**
 * int_index -A function to search for an integer
 * @array: An array of integer
 * @size: The size of an array
 * @cmp: The callback function
 * Return: integer or 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
				{
					return (i);
				}
				i++;
			}
		}
	}
	return (-1);
}
