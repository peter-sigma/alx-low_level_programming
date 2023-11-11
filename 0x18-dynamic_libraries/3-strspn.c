#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strspn -function
 * @s: input 1
 * @accept: input 2
 * Return: function
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}

