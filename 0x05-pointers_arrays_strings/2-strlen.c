#include <stdio.h>
/**
 * _strlen - Entry point
 * @s: our string
 * Return: Length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	{
		length++;
	}
	return (length);
}

