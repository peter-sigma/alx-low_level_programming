#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- A function to read a text file print to STDOUT.
 * @filename: text file to read
 * @letters: number of letters to read
 * Return: w- actual number of bytes read and print to STDOUT
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *b;
	ssize_t fd, w, r;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	b = malloc(sizeof(char) * letters);
	r = read(fd, b, letters);
	w = write(STDOUT_FILENO, b, r);

	free(b);
	close(fd);
	return (w);
}

