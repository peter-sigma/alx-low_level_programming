#include "main.h"
/**
 * _strspn -a function that gets the length of a prefix substring
 * @s: main string
 * @accept: substring
 * Return: umber of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, length;

	length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				length++;
			}
		}
	}
	return (length);
}
