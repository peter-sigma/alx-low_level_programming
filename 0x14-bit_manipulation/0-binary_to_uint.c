#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to unsigned int
 * @b: an input string containing the binary number
 * Return: Number in decimal
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int answer = 0;

	if (!b)
		return (0);

	while (b[i])
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		answer = 2 * answer + (b[i] - '0');
		i++;
	}

	return (answer);
}

