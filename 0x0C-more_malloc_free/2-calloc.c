#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - function to allocate memory to array using malloc
 * @nmemb: array
 * @size: size of array
 * Return: memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	pointer = malloc(nmemb * size);
	if (pointer == NULL)
	{
		return (NULL);
	}
	for (; i < nmemb * size; i++)
	{
		pointer[i] = 0;
	}

	return (pointer);
}
