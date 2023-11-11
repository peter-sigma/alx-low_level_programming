#include "main.h"
/**
 * _memcpy - a function that copies memory area.
 * @dest: pointer to the destination
 * @src: pointer to the source
 * @n: the number of bytes
 * Return: destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
