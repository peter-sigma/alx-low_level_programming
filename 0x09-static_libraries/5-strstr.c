#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strstr - function
 * @haystack: the string
 * @needle: subset
 * Return: subset
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}


