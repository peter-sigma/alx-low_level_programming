#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - function to concatenate 2 strings
 * @s1: first string
 * @s2: second string
 * @n: bytes of s2
 * Return: pointer to s1
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pointer;
	unsigned int i, j, size;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{

	}
	for (j = 0; s2[j] != '\0'; j++)
	{

	}
	if (n > j)
	{
		n = j;
	}
	pointer = malloc((i + n + 1) * sizeof(char));
	if (pointer == NULL)
	{
		return (0);
	}
	for (size = 0; size < i; size++)
	{
		pointer[size] = s1[size];
	}
	while (size < (i + n))
	{
		pointer[size] = s2[size - i];
		size++;
	}
	pointer[size] =  '\0';
return (pointer);
}

