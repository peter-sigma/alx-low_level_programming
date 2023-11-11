#include "main.h"
#include <stdio.h>
/**
 *_strstr -a function that locates a substring
 *@haystack: string
 *@needle: substring
 *Return: a pointer to the beginning of the located substring, or NULL
 */
char *_strstr(char *haystack, char *needle)
{

	for (; *haystack != '\0'; haystack++)
	{
		char *mystring = haystack;
		char *mysubstring = needle;

		while (*mystring == *mysubstring && *mysubstring != '\0')
		{
			mystring++;
			mysubstring++;
		}
		if (*mysubstring == '\0')
		{
			return (haystack);
		}
	}
	return (NULL);
}

