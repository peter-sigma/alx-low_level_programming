#include "main.h"
#include <stdlib.h>
/**
 * argstostr - a function to concatenate all the arguments of the program.
 * @ac: The number of arguments.
 * @av: An array of strings containing the arguments.
 *
 * Return: A pointer to the new concatenated string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int i, length = 0, index = 0;
	char *current_arg;
	char *concatenated_string;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		current_arg = av[i];
		while (*current_arg != '\0')
		{
			length++;
			current_arg++;
		}
		length++;
	}

	concatenated_string = (char *) malloc(length * sizeof(char));

	if (concatenated_string == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		char *current_arg = av[i];

		while (*current_arg != '\0')
		{
			concatenated_string[index++] = *current_arg;
			current_arg++;
		}
		concatenated_string[index++] = '\n';
	}
	concatenated_string[index] = '\0';
	return (concatenated_string);
}

