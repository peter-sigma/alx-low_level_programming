#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - A function to allocate memory using malloc
 * @b: number of var type
 * Return: value
 */
void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
	{
		exit(98);
	}
	return (pointer);
}
