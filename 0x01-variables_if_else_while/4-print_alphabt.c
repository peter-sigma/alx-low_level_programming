#include <stdio.h>
/**
 * main - A program that prints in lower case exept q and e
 * Return: 0
 */

int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}

		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
