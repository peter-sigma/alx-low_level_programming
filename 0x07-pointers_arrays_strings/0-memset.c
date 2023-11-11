#include "main.h"
#include <stdio.h>

/**
 * *_memset -a function that fills fills memory with a constant byte
 * @s: a pointer
 * @b: a constant
 * @n: the size of the memory to print
 *
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
