#include <string.h>
#include "main.h"
/**
 * _strcmp -Entry
 * @s1: string 1
 * @s2: string 2
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	for (; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}

