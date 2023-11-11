#include <stdio.h>
/**
 *main - a program to print the base 16.
 * Return: 0
 */

int main(void)
{
	int i = 48;
	int j = 97;

	while (i <= 57)
	{
		putchar(i);
		i++;
	}

	while (j <= 102)
	{
		putchar(j);
		j++;
	}

	putchar('\n');
	return (0);

}
