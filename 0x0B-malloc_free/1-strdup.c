#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * *_strdup -function
 * @str: string
 * Return: address
 */

char *_strdup(char *str)
{
	char *dup;
	int i = 0, r = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	dup = malloc(sizeof(char) * (i + 1));

	if (dup == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		dup[r] = str[r];


	return (dup);
}

