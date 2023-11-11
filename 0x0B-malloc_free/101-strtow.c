#include <stdlib.h>
#include <stdio.h>

/**
 * strtow - function that split a string into words.
 * @str: The string to split.
 * Return: A pointer to an array of strings containing the words, or NULL
 */
char **strtow(char *str)
{
	char **words;
	int word_count = 0;
	int i, j, k, len = 0, start_index, end_index;

	if (str == NULL || *str == '\0')
		return (NULL);
	while (str[len] != '\0')
	{
		if (str[len] != ' ' && (str[len + 1] == ' ' || str[len + 1] == '\0'))
			word_count++;
		len++;
	}
	words = (char **) malloc((word_count + 1) * sizeof(char *));
		if (words == NULL)
			return (NULL);
	i = 0, k = 0;
	while (i < len && k < word_count)
	{
		while (str[i] == ' ')
			i++;
		start_index = i;
		while (str[i] != ' ' && str[i] != '\0')
			i++;
		end_index = i;
		if (end_index > start_index)
		{
			words[k] = (char *) malloc((end_index - start_index + 1) * sizeof(char));
			if (words[k] == NULL)
				return (NULL);
			j = 0;
			while (start_index < end_index)
			{
				words[k][j++] = str[start_index++];
			}
			words[k][j] = '\0';
			k++;
		}
	}
	words[k] = NULL;
	return (words);
}

