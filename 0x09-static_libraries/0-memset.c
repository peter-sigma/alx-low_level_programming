#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _memset - a function to set the memory
 * @s: string
 * @b: character
 * @n: length
 * Return: character
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}


