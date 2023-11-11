#include <stdlib.h>
#include "main.h"

/**
 * create_array - function
 * @size: size of array
 * @c: input
 * Return: our array
 */

char *create_array(unsigned int size, char c)
{
	char *arr = (char *) malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0 || arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}

