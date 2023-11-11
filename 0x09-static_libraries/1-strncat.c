#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strncat - function
 * @dest: first param
 * @src: second param
 * @n: third param
 * Return: OUtput
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}


