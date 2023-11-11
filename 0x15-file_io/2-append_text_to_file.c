#include "main.h"

/**
 * append_text_to_file - A function that appends text at the end of a file.
 * @filename: Name of the file.
 * @text_content: The string to append to the file.
 *
 * Return: -1 if it fails else 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i])
			i++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, i);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}

