#include <stdio.h>
/**
 * main - A program to print alphabets in reverse order
 * Return: 0
 */

int main(void)
{
	int i = 122;

	while (i >= 97)
	{
		putchar(i);
		i--;
	}

	putchar('\n');
	return (0);
}
